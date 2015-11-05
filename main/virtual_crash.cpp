/* virtual_crash.cpp */
#include <iostream>
using namespace std;

class Base{
    int i;
public:
    Base(){ i=0; }
    virtual void disp(){ cout<<"Base   : "<<i<<endl; } /* toggle virtual */
};

class Derived : public Base{
    int i, j, k;
public:
    Derived(){ i=j=k=43; }
    void disp(){ cout<<"Derived: "<<i<<' '<<j<<' '<<k<<endl; }
};

int main()
{
    int i;

    Base *p; /* toggle Base/Derived */
    Derived D[5];

    p=D;
    for(i=0; i<5; ++i) p[i].disp();

    cin.get();
    return 0;
}
/* end of virtual_crash.cpp */
