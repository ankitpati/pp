#include <iostream>
using namespace std;

class Base{
    int a;
public:
    int b;
    void geta(){ a=20; }
    void getb(){ b=40; }
    void showa(){ cout<<"a: "<<a<<endl; }
};

class Derive : public Base{
    int c;
public:
    void getc(){ c=50; }
    void display();
};

void Derive::display()
{
    showa();
    cout<<"b: "<<b<<endl<<"c: "<<c<<endl<<endl;
}

int main()
{
    Derive D;
    D.geta(); D.getb(); D.getc();
    D.display();
    D.b=50;
    D.display();
    cin.get();
    return 0;
}
