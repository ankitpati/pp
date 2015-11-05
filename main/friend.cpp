/* friend.cpp */
/* Date  : 19 August 2015
 * Author: Ankit Pati
 */

#include <iostream>
using namespace std;

class real;
class cmplx;

/* real class */
class real{
    float r;
public:
    real(), ~real();
    void put();
    friend void r_add(real &, real);
    friend void cr_add(cmplx &, real);
};

real::real()
{
    cout<<"Enter real number:"<<endl;
    cin>>r; cin.get();
}

real::~real()
{
    cout<<"real destroyed"<<endl;
}

void real::put()
{
    cout<<r;
}

void r_add(real &r1, real r2)
{
    r1.r+=r2.r;
}
/* end of real class */

/* complex class */
class cmplx{
    unsigned r, i;
public:
    cmplx(), ~cmplx();
    void put();
    friend void c_add(cmplx &, cmplx);
    friend void cr_add(cmplx &, real);
};

cmplx::cmplx()
{
    cout<<"Enter complex number in \"real imaginary\" form:"<<endl;
    cin>>r>>i; cin.get();
}

cmplx::~cmplx()
{
    cout<<"cmplx destroyed"<<endl;
}

void cmplx::put()
{
    cout<<'('<<r<<" + "<<i<<"i) ";
}

void c_add(cmplx &c1, cmplx c2)
{
    c1.r+=c2.r;
    c1.i+=c2.i;
}
/* end of complex class */

/* addition in friend */
void cr_add(cmplx &c, real r)
{
    c.r+=r.r;
}
/* end of addition in friend */

int main()
{
    cmplx c;
    real r;

    c.put(); cout<<"+ ";
    r.put(); cout<<"= ";
    cr_add(c, r);
    c.put(); cout<<endl;

    return 0;
}
/* end of friend.cpp */
