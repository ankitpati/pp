#include <iostream>
using namespace std;

class father{
    void getdata();
protected:
    char name[80];
    char occ[80];
public:
    int age;
    void callgd(){ getdata(); }
};

class child : father{
protected:
    char name[80];
    int age;
public:
    void get(), display();
};

void father::getdata()
{
    cout<<"Father's Name, Occupation, Age?"<<endl;
    cin.getline(name, 80).getline(occ, 80);
    cin>>age; cin.get();
    cout<<endl;
}

void child::get()
{
    callgd();
    cout<<"Child's Name, Age?"<<endl;
    cin.getline(name, 80);
    cin>>age; cin.get();
}

void child::display()
{
    cout<<endl<<"FATHER"<<endl
        <<"Name      : "<<father::name<<endl
        <<"Occupation: "<<occ<<endl
        <<"Age       : "<<father::age<<endl
        <<endl<<"CHILD"<<endl
        <<"Name      : "<<name<<endl
        <<"Age       : "<<age<<endl;
}

int main()
{
    child c;
    c.get();
    c.display();
    cin.get();
    return 0;
}
