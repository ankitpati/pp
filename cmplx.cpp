/* cmplx.cpp */
/* Date  : 11 August 2015
 * Author: Ankit Pati
 */

#include <iostream>
using namespace std;

/* complex class */
class cmplx{
    unsigned r, i;
public:
    cmplx();
    void put();
    friend void c_add(cmplx &, cmplx);
};

cmplx::cmplx()
{
    cout<<"Enter complex number in \"real imaginary\" form:"<<endl;
    cin>>r>>i; cin.get();
}

void cmplx::put()
{
    cout<<'('<<r<<" + "<<i<<"i) ";
}

void c_add(cmplx &c1, cmplx c2)
{
    c1.r=c1.r+c2.r;
    c1.i=c1.i+c2.i;
}
/* end of complex class */

int main()
{
    cmplx c1, c2;

    c1.put(); cout<<"+ ";
    c2.put(); cout<<"= ";
    c_add(c1, c2);
    c1.put(); cout<<endl;

    cin.get();
    return 0;
}
/* end of cmplx.cpp */
