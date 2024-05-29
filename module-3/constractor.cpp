#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        int cls;
        char section;
        char name[100];

    Student(int r,char s,int c,char *nm){
        roll=r;
        cls=c;
        section=s;
        strcpy(name,nm);
    }
};
int main()
{
    char nm1[100]="Rahim khan";
    char nm2[100]="karim sing";
    Student rahim(1093,'A',10,nm1);
    Student karim(1094,'D',11,nm2);

    cout<<rahim.roll<<endl;
    cout<<rahim.cls<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.name<<endl;

    cout<<karim.roll<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.section<<endl;
    cout<<karim.name<<endl;
    return 0;
}