/* 4.1.cpp */
/* Date  : 15 October 2015
 * Author: Ankit Pati
 */

#include <iostream>
using namespace std;

/* real class */
class real{
    float r;
public:
    real(), real(float);
    void put();
    real &operator++();
    friend real operator++(real, int);
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

real &real::operator++()
{
    cout<<"(Prefix  operator++() called) ";
    ++r;
    return *this;
}
/* end of real class */

/* friends of real */
real operator++(real r, int)
{
    cout<<"(Postfix operator++() called) ";
    r.r++;
    return r;
}
/* end of friends of real */

int main()
{
    real r;
    cout<<" pre -increment (++) : "; (++r).put();
    cout<<" post-increment (++) : "; (r++).put();
    return 0;
}
/* end of 4.1.cpp */

/* OUTPUT

Enter real number:
43.56
 pre -increment (++) : (Prefix  operator++() called) 44.56
 post-increment (++) : (Postfix operator++() called) 45.56

*/
