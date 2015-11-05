/* 5.2.cpp */
/* Date  : 20 October 2015
 * Author: Ankit Pati
 */

#include <iostream>
using namespace std;

/* grandfather class */
class grandfather{
    void get(), put();
public:
    char name[80];
    int age;
};

void grandfather::get()
{
    cout<<"GRANDFATHER"<<endl
        <<" - Name : "; cin.getline(name, 80);
    cout<<" - Age  : "; cin>>age; cin.get();

    cout<<endl;
}

void grandfather::put()
{
    cout<<"GRANDFATHER"<<endl
        <<" - Name : "<<name<<endl
        <<" - Age  : "<<age <<endl;

    cout<<endl;
}
/* end of grandfather class */

/* father class */
class father : grandfather{
    char name[80];
    int age;
protected:
    void getdata(), putdata();
};

void father::getdata()
{
    cout<<"GRANDFATHER"<<endl
        <<" - Name : "; cin.getline(grandfather::name, 80);
    cout<<" - Age  : "; cin>>grandfather::age; cin.get();
    cout<<endl;

    cout<<"FATHER"<<endl
        <<" - Name : "; cin.getline(name, 80);
    cout<<" - Age  : "; cin>>age; cin.get();
    cout<<endl;
}

void father::putdata()
{
    cout<<"GRANDFATHER"<<endl
        <<" - Name : "<<grandfather::name<<endl
        <<" - Age  : "<<grandfather::age <<endl
        <<endl;

    cout<<"FATHER"<<endl
        <<" - Name : "<<name<<endl
        <<" - Age  : "<<age <<endl
        <<endl;
}
/* end of father class */

/* child class */
class child : protected father{
protected:
    char name[80];
    int age;
public:
    void display();
};

void child::display()
{
    cout<<"Accepting..."<<endl;
    getdata();
    cout<<"CHILD"<<endl
        <<" - Name : "; cin.getline(name, 80);
    cout<<" - Age  : "; cin>>age; cin.get();
    cout<<endl;

    cout<<"Displaying..."<<endl;
    putdata();
    cout<<"CHILD"<<endl
        <<" - Name : "<<name<<endl
        <<" - Age  : "<<age <<endl
        <<endl;
}
/* end of child class */

int main()
{
    child C;
    C.display();
    return 0;
}
/* end of 5.2.cpp */

/* OUTPUT

Accepting...
GRANDFATHER
 - Name : Richard
 - Age  : 80

FATHER
 - Name : David
 - Age  : 50

CHILD
 - Name : Jack
 - Age  : 15

Displaying...
GRANDFATHER
 - Name : Richard
 - Age  : 80

FATHER
 - Name : David
 - Age  : 50

CHILD
 - Name : Jack
 - Age  : 15

*/
