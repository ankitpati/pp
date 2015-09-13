/* fnoload.cpp */
/* Date  : 19 August 2015
 * Author: Ankit Pati
 */

#include <iostream>
#include <cmath>
using namespace std;

/* area */
double area(double r)
{
    return M_PI*r*r; /* circle */
}

double area(double l, double b)
{
    return l*b; /* rectangle */
}

double area(double s1, double s2, double s3)
{
    double s=(s1+s2+s3)/2.0;
    return sqrt(s*(s-s1)*(s-s2)*(s-s3)); /* triangle */
}
/* end of area */

/* perimeter */
double peri(double r)
{
    return 2.0*M_PI*r; /* circle */
}

double peri(double l, double b)
{
    return 2.0*(l+b); /* rectangle */
}

double peri(double s1, double s2, double s3)
{
    return s1+s2+s3; /* triangle */
}
/* end of perimeter */

int main()
{
    double r, l, b, s1, s2, s3;
    cout<<"Enter following details:"<<endl
        <<" - Radius of Circle             : "; cin>>r; cin.get();
    cout<<" - Length, Breadth of Rectangle : "; cin>>l>>b; cin.get();
    cout<<" - Sides of Triangle            : "; cin>>s1>>s2>>s3; cin.get();
    cout<<"Areas are:"<<endl
        <<" - Circle    : "<<area(r)<<endl
        <<" - Rectangle : "<<area(l, b)<<endl
        <<" - Triangle  : "<<area(s1, s2, s3)<<endl;
    cout<<"Perimeters are:"<<endl
        <<" - Circle    : "<<peri(r)<<endl
        <<" - Rectangle : "<<peri(l, b)<<endl
        <<" - Triangle  : "<<peri(s1, s2, s3)<<endl;
    cin.get();
    return 0;
}
/* end of fnoload.cpp */
