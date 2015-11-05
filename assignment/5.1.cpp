/* 5.1.cpp */
/* Date  : 20 October 2015
 * Author: Ankit Pati
 */

#include <iostream>
using namespace std;

/* father class */
class father{
    char name[80];
    int age;
protected:
    void get(), put();
};

void father::get()
{
    cout<<"FATHER"<<endl
        <<" - Name : "; cin.getline(name, 80);
    cout<<" - Age  : "; cin>>age; cin.get();

    cout<<endl;
}

void father::put()
{
    cout<<"FATHER"<<endl
        <<" - Name : "<<name<<endl
        <<" - Age  : "<<age <<endl;

    cout<<endl;
}
/* end of father class */

/* mother class */
class mother{
    char name[80];
    int age;
protected:
    void get(), put();
};

void mother::get()
{
    cout<<"MOTHER"<<endl
        <<" - Name : "; cin.getline(name, 80);
    cout<<" - Age  : "; cin>>age; cin.get();

    cout<<endl;
}

void mother::put()
{
    cout<<"MOTHER"<<endl
        <<" - Name : "<<name<<endl
        <<" - Age  : "<<age <<endl;

    cout<<endl;
}
/* end of mother class */

/* child class */
class child : father, mother{
    char name[80];
    int age;
protected:
    void get(), put();
public:
    void display();
};

void child::get()
{
    father::get();
    mother::get();

    cout<<"CHILD"<<endl
        <<" - Name : "; cin.getline(name, 80);
    cout<<" - Age  : "; cin>>age; cin.get();

    cout<<endl;
}

void child::put()
{
    father::put();
    mother::put();

    cout<<"CHILD"<<endl
        <<" - Name : "<<name<<endl
        <<" - Age  : "<<age <<endl;

    cout<<endl;
}

void child::display()
{
    cout<<"Accepting..."<<endl;
    get();
    cout<<"Displaying..."<<endl;
    put();
}
/* end of child class */

int main()
{
    child C;
    C.display();
    return 0;
}
/* end of 5.1.cpp */

/* OUTPUT

Accepting...
FATHER
 - Name : David
 - Age  : 50

MOTHER
 - Name : Anya
 - Age  : 45

CHILD
 - Name : Jack
 - Age  : 15

Displaying...
FATHER
 - Name : David
 - Age  : 50

MOTHER
 - Name : Anya
 - Age  : 45

CHILD
 - Name : Jack
 - Age  : 15

*/
