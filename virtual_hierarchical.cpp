/* virtual_hierarchical.cpp */
#include <iostream>
using namespace std;

/* class father */
class father{
    char name[80];
    int age;
public:
    virtual void get(), put();
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
        <<" - Age  : "<<age<<endl;
    cout<<endl;
}
/* end of class father */

/* class child0 */
class child0 : public father{
    char name[80];
    int age;
public:
    void get(), put();
};

void child0::get()
{
    cout<<"CHILD 0"<<endl
        <<" - Name : "; cin.getline(name, 80);
    cout<<" - Age  : "; cin>>age; cin.get();
    cout<<endl;
}

void child0::put()
{
    cout<<"CHILD 0"<<endl
        <<" - Name : "<<name<<endl
        <<" - Age  : "<<age<<endl;
    cout<<endl;
}
/* end of class child0 */

/* class child1 */
class child1 : public father{
    char name[80];
    int age;
public:
    void get(), put();
};

void child1::get()
{
    cout<<"CHILD 1"<<endl
        <<" - Name : "; cin.getline(name, 80);
    cout<<" - Age  : "; cin>>age; cin.get();
    cout<<endl;
}

void child1::put()
{
    cout<<"CHILD 1"<<endl
        <<" - Name : "<<name<<endl
        <<" - Age  : "<<age<<endl;
    cout<<endl;
}
/* end of class child1 */

int main()
{
    father F;
    child0 C0;
    child1 C1;

    cout<<"Accepting..."<<endl;
    F .get();
    C0.get();
    C1.get();

    cout<<"Displaying..."<<endl;
    F .put();
    C0.put();
    C1.put();

    cin.get();
    return 0;
}
/* end of virtual_hierarchical.cpp */
