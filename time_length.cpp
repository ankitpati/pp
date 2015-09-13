/* time_length.cpp */
/* Date  : 11 August 2015
 * Author: Ankit Pati
 */

#include <iostream>
using namespace std;

/* time class */
class time_c{
    unsigned h, m, s;
public:
    void get(), put();
    friend time_c t_add(time_c, time_c);
};

void time_c::get()
{
    cout<<"Enter time in \"hh mm ss\" format:"<<endl;
    cin>>h>>m>>s; cin.get();
}

void time_c::put()
{
    cout<<"Time: "<<h<<':'<<m<<':'<<s<<endl;
}

time_c t_add(time_c t1, time_c t2)
{
    time_c t;
    t.s=t1.s+t2.s;
    t.m=t1.m+t2.m;
    t.h=t1.h+t2.h;
    while(t.s>59) t.s-=60, ++t.m;
    while(t.m>59) t.m-=60, ++t.h;
    return t;
}
/* end of time class */

/* length class */
class length{
    unsigned m, c;
public:
    static unsigned instances;
    length();
    void get(), put();
    static length l_add(length, length);
};

unsigned length::instances=0;

length::length()
{
    ++instances;
}

void length::get()
{
    cout<<"Enter length in \"metre centimetre\" format:"<<endl;
    cin>>m>>c; cin.get();
}

void length::put()
{
    cout<<"Length: "<<m<<"m "<<c<<"cm"<<endl;
}

length length::l_add(length l1, length l2)
{
    length l;
    l.c=l1.c+l2.c;
    l.m=l1.m+l2.m;
    while(l.c>99) l.c-=100, ++l.m;
    return l;
}
/* end of length class */

int main()
{
    time_c t, t1, t2;
    length l, l1, l2;

    length &lr=l;

    t1.get(); t2.get();
    t=t_add(t1, t2);
    cout<<"Sum ";
    t.put();
    cout<<endl;

    l1.get(); l2.get();
    l=length::l_add(l1, l2);
    cout<<"Sum ";
    l.put();
    cout<<endl;

    cout<<"Showing value of length (sum) reference variable:"<<endl;
    lr.put();
    cout<<endl;

    cout<<"Number of instances of \"length\" class: "<<length::instances<<endl;

    cin.get();
    return 0;
}
/* end of time_length.cpp */
