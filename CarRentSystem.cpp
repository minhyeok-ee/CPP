#include <iostream>
#include <cstring>
using namespace std;

enum MENU {
    REGISTER = 1,
    RENT,
    RETURN,
    SHOW,
    EXIT
};

void ShowMenu();
void RegisterCar();
void Rent(char *carName);
void ReturnCar(char *carName);
void ShowAllCars();

class RentCar{
    private:
        char *car;
        int price;
        bool rented;

    public:
        RentCar(const char *carName, int _price): rented(false) {
            int len = strlen(carName) + 1;
            car = new char[len];
            strcpy(car, carName);
            this->price = _price;
        }

        void ShowInfo() const{
            cout << "car: " << car << endl;
            cout << "price: " << price << endl;
            if(rented == true){
                cout << "Rented" << endl;
            }
            else{
                cout << "Available" << endl;
            }
        }

        const char* GetName() const{
            return car;
        }


        bool Rent(){
            if(rented == true){
                return false;
            }
            rented = true;
            return true;
        }

        bool Return(){
            if(rented == false){
                return false;
            }
            rented = false;
            return true;
        }

        ~RentCar(){
            delete[] car;
            cout << "called destructor" << endl;
        }
};

RentCar *carArr[100];
int carNum = 0;

int main() {
    int choice;
    while(1){
        ShowMenu();
        cout << "선택: ";
        cin >> choice;

        switch(choice){
            case REGISTER:
                RegisterCar();
                break;
            case RENT:{
                if(carNum == 0){
                    cout << "등록된 차량이 없습니다.";
                    break;
                }
                char name[100];
                cout << "대여할 차량명 입력: ";
                cin >> name;
                Rent(name);
                break;}
            case RETURN:{
                if(carNum == 0){
                    cout << "등록된 차량이 없습니다.";
                    break;
                }
                char name[100];
                cout << "반납할 차량명 입력: ";
                cin >> name;
                ReturnCar(name);
                break;}
            case SHOW:
                if(carNum == 0){
                    cout << "등록된 차량이 없습니다.";
                    break;
                }
                ShowAllCars();
                break;
            case EXIT:
                for (int i = 0; i<carNum; i++){
                    delete carArr[i];
                }
                cout << "프로그램 종료" << endl;
                return 0;
            default:
                cout << "잘못된 선택입니다" << endl;
        }
        cout << endl;
    }
    return 0;
}

void ShowMenu(){
    cout << "-----Car Rental System-----" << endl;
    cout << "1. 차량 등록" << endl;
    cout << "2. 차량 대여" << endl;
    cout << "3. 차량 반납" << endl;
    cout << "4. 전체 차량 출력" << endl;
    cout << "5. 종료" << endl;
}

void RegisterCar(){
    if(carNum>=100){
        cout << "더 이상 등록 불가" << endl;
        return;
    }
    char carName[100];
    int price;

    cout << "차량명 입력: ";
    cin >> carName;

    cout << "가격 입력: ";
    cin >> price;

    carArr[carNum] = new RentCar(carName, price);
    carNum++;

    cout << "등록 완료" << endl;
}

void Rent(char *carName){
    for(int i = 0; i<carNum; i++){
        if(strcmp(carArr[i]->GetName(), carName) == 0){
            if(carArr[i]->Rent()){
                cout << "대여 완료" << endl;
            }
            else{
                cout << "이미 대여중입니다." << endl;
            }
            return;
        }
    }
    cout << "해당 차량을 찾을 수 없습니다" << endl;
}

void ReturnCar(char *carName) {
    for(int i = 0; i<carNum; i++){
        if(strcmp(carArr[i]->GetName(), carName) == 0){
            if(carArr[i]->Return()){
                cout << "반납 완료" << endl;
            }
            else {
                cout << "이미 대여 가능한 상태입니다" << endl;
            }
            return;
        }
    }
    cout << "해당 차량을 찾을 수 없습니다" << endl;
}

void ShowAllCars(){
    for(int i = 0; i<carNum; i++){
        carArr[i]->ShowInfo();
    }
}