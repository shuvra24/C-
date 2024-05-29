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
    char name[100]="rahim uddin";
    //Student rahim(1093,8,'A',nm);
    Student *rahim = new Student(1093,'A',11,name);

    cout<<(*rahim).roll<<endl;
    cout<<rahim->name<<endl;
    cout<<rahim->cls<<endl;

    delete rahim;
    cout<<rahim->name<<endl;
    cout<<rahim->roll<<endl;
    cout<<rahim->section<<endl;
    cout<<rahim->cls<<endl;
    return 0;
}