#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    Student rahim;
    rahim.roll=1093;
    rahim.cls=10;
    rahim.section='C';
    char nm_rahim[100]="Rahim Ullah Khan";
    strcpy(rahim.name,nm_rahim);

    Student karim;
    karim.roll=1094;
    karim.cls=10;
    karim.section='C';
    char nm_karim[100]="Karim Cholimulla";
    strcpy(karim.name,nm_karim);

    cout<<karim.roll;
    return 0;
}