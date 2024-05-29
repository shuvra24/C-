#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        int roll;
        int cls;
        char section;
        char name[100];
    
    Student(int r,int c,char s,char *nm){
        roll=r;
        cls=c;
        section=s;
        strcpy(name,nm);
    }
};
Student fun(){
    char nm[100]="Asad Ullah";
    Student rahim(1093,8,'A',nm);
    return rahim;
}
int main()
{
    Student rahim=fun();
    cout<<rahim.cls<<endl;
    cout<<rahim.name<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.roll;
    return 0;
}