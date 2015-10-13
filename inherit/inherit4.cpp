#include <iostream>
using namespace std;

class Base{
    int a;
public:
    Base(int b){ a=b; }
    ~Base(){ cout<<"a: "<<a<<endl; }
};

class Derive : public Base{
public:
    Derive(int d) : Base(d) { }
};

void func()
{
    Derive D=43;
}

int main()
{
    func();
    cin.get();
    return 0;
}
