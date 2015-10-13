#include <iostream>
using namespace std;

class grandfather{
    void get()
    {
        cout<<"GRANDFATHER"<<endl
            <<" - Name : "; cin.getline(name, 80);
        cout<<" - Age  : "; cin>>age; cin.get();

        cout<<endl;
    }
    void put()
    {
        cout<<"GRANDFATHER"<<endl
            <<" - Name : "<<name<<endl
            <<" - Age  : "<<age <<endl;

        cout<<endl;
    }
public:
    char name[80];
    int age;
};

class father : grandfather{
    char name[80];
    int age;
protected:
    void getdata()
    {
        cout<<"GRANDFATHER"<<endl
            <<" - Name : "; cin.getline(grandfather::name, 80);
        cout<<" - Age  : "; cin>>grandfather::age; cin.get();

        cout<<"FATHER"<<endl
            <<" - Name : "; cin.getline(name, 80);
        cout<<" - Age  : "; cin>>age; cin.get();

        cout<<endl;
    }
    void putdata()
    {
        cout<<"GRANDFATHER"<<endl
            <<" - Name : "<<grandfather::name<<endl
            <<" - Age  : "<<grandfather::age <<endl;

        cout<<"FATHER"<<endl
            <<" - Name : "<<name<<endl
            <<" - Age  : "<<age <<endl;

        cout<<endl;
    }
};

class child : protected father{
protected:
    char name[80];
    int age;
public:
    void display()
    {
        getdata();
        cout<<"CHILD"<<endl
            <<" - Name : "; cin.getline(name, 80);
        cout<<" - Age  : "; cin>>age; cin.get();

        putdata();
        cout<<"CHILD"<<endl
            <<" - Name : "<<name<<endl
            <<" - Age  : "<<age <<endl;
    }
};

int main()
{
    child C;
    C.display();
    return 0;
}
