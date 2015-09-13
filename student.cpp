/* student.cpp */
/* Date  : 11 August 2015
 * Author: Ankit Pati
 */

#include <iostream>
using namespace std;

class student{
    char name[80];
    float marks[5], total, avg;
public:
    student(), ~student();
    void accept(), calculate(), display();
};

student::student()
{
    accept();
    calculate();
}

student::~student()
{
    display();
}

void student::accept()
{
    unsigned i;
    cout<<"Enter following details:"<<endl
        <<" - Name                : ";
    cin.getline(name, 80);
    cout<<" - Marks in 5 Subjects : ";
    for(i=0; i<5; ++i){
        cin>>marks[i]; cin.get();
    }
}

void student::calculate()
{
    unsigned i;
    for(i=total=0; i<5; ++i) total+=marks[i];
    avg=total/i;
}

void student::display()
{
    unsigned i;
    cout<<"Marksheet:"<<endl
        <<" - Name    : "<<name<<endl
        <<" - Marks   : ";
    for(i=0; i<5; ++i) cout<<marks[i]<<' ';
    cout<<endl<<" - Total   : "<<total<<endl
              <<" - Average : "<<avg<<endl;
}

int main()
{
    student s[3];
    return 0;
}
/* end of student.cpp */

/* OUTPUT

Enter following details:
 - Name                : Ankit Pati
 - Marks in 5 Subjects : 45 35 36 28 24
Enter following details:
 - Name                : Tiashaa Chatterjee
 - Marks in 5 Subjects : 45 45 40 38 35
Enter following details:
 - Name                : Mayank Verma
 - Marks in 5 Subjects : 30 30 35 28 29
Marksheet:
 - Name    : Mayank Verma
 - Marks   : 30 30 35 28 29
 - Total   : 152
 - Average : 30.4
Marksheet:
 - Name    : Tiashaa Chatterjee
 - Marks   : 45 45 40 38 35
 - Total   : 203
 - Average : 40.6
Marksheet:
 - Name    : Ankit Pati
 - Marks   : 45 35 36 28 24
 - Total   : 168
 - Average : 33.6

*/
