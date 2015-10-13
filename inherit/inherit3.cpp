#include <iostream>
using namespace std;

class Base1{
public:
    int a;
    void geta(){ a=20; }
};

class Base2{
public:
    int b;
    void getb(){ b=40; }
};

class Derive : public Base1, public Base2{
    int total;
public:
    void display();
};

void Derive::display()
{
    total=a+b;
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"total: "<<total<<endl;
}

int main()
{
    Derive D;
    D.geta(); D.getb();
    D.display();
    cin.get();
    return 0;
}
