#include <iostream>
#include <cstring>
using namespace std;

class Car{
    private:
        int gasolineGauge;
    public:
        Car(int gas) : gasolineGauge(gas){}

        int GetGasGauge(){
            return gasolineGauge;
        }
};


class HybridCar: public Car{
    private:
        int electricGauge;
    public:
        HybridCar(int gas, int elec):electricGauge(elec), Car(gas){}
        int GetElecGauge(){
            return electricGauge;
        }
};

class HybridWaterCar: public HybridCar{
    private:
        int waterGauge;
    public:
        HybridWaterCar(int gas, int elec, int water):waterGauge(water), HybridCar(gas, elec){}

        void ShowCurrentGauge(){
            cout << "잔여 가솔린: " << GetGasGauge() << endl;
            cout << "잔여 전기량: " << GetElecGauge() << endl;
            cout << "잔여 워터량: " << waterGauge << endl;
        }
};

int main() {
    HybridWaterCar car1(20, 30, 10);
    car1.ShowCurrentGauge();
    return 0;
}