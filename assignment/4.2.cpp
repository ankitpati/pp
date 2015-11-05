/* 4.2.cpp */
/* Date  : 20 October 2015
 * Author: Ankit Pati
 */

#include <iostream>
using namespace std;

/* length class */
class length{
    float m;
public:
    void get(), put();
    length &operator*(length);
};

void length::get()
{
    cout<<"Enter length in metres:"<<endl;
    cin>>m; cin.get();
}

void length::put()
{
    cout<<m<<" metre squared"<<endl;
}

length &length::operator*(length l)
{
    m *= l.m;
    return *this;
}
/* end of length class */

int main()
{
    length l, l1, l2;
    l1.get(); l2.get();
    l = l1 * l2;
    cout<<"Product: ";
    l.put();
    return 0;
}
/* end of 4.2.cpp */

/* OUTPUT

Enter length in metres:
5
Enter length in metres:
43
Product: 215 metre squared

*/
