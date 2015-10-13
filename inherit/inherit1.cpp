#include <iostream>
using namespace std;

class Base{
public:
    int a, b;
    void geta(){ a=20; }
    void getb(){ b=40; }
};

class Derive : Base{
    int c;
public:
    Derive(){ geta(); getb(); }
    void getc(){ c=50; }
    void display();
};

void Derive::display(){ cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl; }

int main()
{
    Derive D;
    D.getc(); D.display();
    cin.get();
    return 0;
}
