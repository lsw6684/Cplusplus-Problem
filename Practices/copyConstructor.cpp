#include <iostream>
#include <cstring>
using namespace std;
class Book
{
public:
    Book();
    Book(const char t[], const char pub[], int y, int pr);
    Book(const Book& copy);
    void print();

    ~Book();

private:
    char* title;
    char* publisher;
    int year;
    int price;
};

Book::Book()
{
    title = new char[20];
    publisher = new char[20];
    year = 0;
    price = 0;
}

Book::Book(const char t[], const char pub[], int y, int pr)
{
    title = new char[20];
    for (int i = 0; i < 20; i++)
        title[i] = t[i];
    publisher = new char[20];
    for (int i = 0; i < 20; i++)
        publisher[i] = pub[i];
    year = y;
    price = pr;
}
Book::Book(const Book& copy)
{   //복사할 배열만큼 크기 생성 + null
    this->title = new char[strlen(copy.title) + 1];
    this->publisher = new char[strlen(copy.publisher) + 1];
    
    //this->title에 copy.title 내용을 복사. memcpy는 사이즈 값을 받기 때문에
    //copy.title의 크기 + null. char는 1바이트니까 *1
    memcpy(this->title, copy.title, strlen(copy.title) * 1 + 1);
    memcpy(this->publisher, copy.publisher, strlen(copy.publisher) * 1 + 1);
    this->year = copy.year;
    this->price = copy.price;
}
Book::~Book()
{
    delete[] title;
    delete[] publisher;
}
void Book::print()
{
    cout << "Title : " << title << "\nPublisher : " << publisher << "\nYear : " << year << "\nPrice : " << price << endl;
}
int main()
{
    Book book1("C++ Primer", "Addisn-Wesley", 1989, 39000);
    book1.print();
    Book book2 = book1;
    book2.print();
    Book book3(book1);
    book3.print();
    system("pause");
}