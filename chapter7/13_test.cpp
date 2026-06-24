#include <iostream>
#include <cstring>
using namespace std;

class Book{
    private:
        char *title;
        char *isbn;
        int price;

    public:
        Book(char *title, char *isbn, int price) : price(price) {
            this->title = new char[strlen(title) + 1];
            this->isbn = new char[strlen(isbn) + 1];
            strcpy(this->title, title);
            strcpy(this->isbn, isbn);
        }
        void ShowBookInfo(){
            cout << "제목: " << title << endl;
            cout << "ISBN: " << isbn << endl;
            cout << "가격: " << price << endl;
        }
        ~Book(){
            delete[] title;
            delete[] isbn;
        }

};

class Ebook : public Book{
    private:
        char *DRMKey;

    public:
        Ebook(char *title, char *isbn, int price, char *key): Book(title,isbn,price){
            DRMKey = new char[strlen(key) + 1];
            strcpy(DRMKey, key);
        }
        void ShowBookInfo(){
            Book::ShowBookInfo();
            cout << "인증키: " << DRMKey << endl;
        }
        ~Ebook(){
            delete[] DRMKey;
        }
};

int main() {
    Book book("좋은 C++", "555-12345-890-0", 20000);
    book.ShowBookInfo();
    cout << endl;
    Ebook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
    ebook.ShowBookInfo();
    return 0;
}