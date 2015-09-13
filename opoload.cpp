/* opoload.cpp */
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
    real(), real(float);
    void put();
    real &operator--(), &operator++();
    real operator+(real), operator-(real);
    friend real operator-(real), operator*(real, real), operator/(real, real);
};

real::real()
{
    cout<<"Enter real number:"<<endl;
    cin>>r; cin.get();
}

real::real(float r1)
{
    r=r1;
}

void real::put()
{
    cout<<r<<endl;
}

real &real::operator--()
{
    --r;
    return *this;
}

real &real::operator++()
{
    ++r;
    return *this;
}

real real::operator+(real r1)
{
    real ret=r+r1.r;
    return ret;
}

real real::operator-(real r1)
{
    real ret=r-r1.r;
    return ret;
}
/* end of real class */

/* friends of real */
real operator-(real r)
{
    real ret=-r.r;
    return ret;
}

real operator*(real r1, real r2)
{
    real ret=r1.r*r2.r;
    return ret;
}

real operator/(real r1, real r2)
{
    real ret=r1.r/r2.r;
    return ret;
}
/* end of friends of real */

int main()
{
    real r1, r2;

    cout<<"Overloaded operators:"<<endl;
    cout<<" unary minus  ( -) : "; (  -r1).put();
    cout<<" decrement    (--) : "; ( --r1).put();
    cout<<" increment    (++) : "; ( ++r1).put();
    cout<<" binary minus ( -) : "; (r1-r2).put();
    cout<<" binary plus  ( +) : "; (r1+r2).put();
    cout<<" multiply     ( *) : "; (r1*r2).put();
    cout<<" divide       ( /) : "; (r1/r2).put();
    cin.get();
    return 0;
}
/* end of opoload.cpp */
