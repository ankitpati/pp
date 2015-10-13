#include <iostream>
using namespace std;

struct Base{
    int b;
    void geta(){ a=20; }
    void getb(){ b=40; }
    void showa(){ cout<<"a: "<<a<<endl; }
private:
    int a;
};

struct Derive : Base{
    void getc(){ c=50; }
    void display();
private:
    int c;
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
