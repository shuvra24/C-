#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int roll;
    int cls;
    char section;
    string name;

    Student(int r, char s, int c, const string& nm) {
        roll = r;
        cls = c;
        section = s;
        name = nm;
    }
};

int main() {
    Student rahim(1093, 'A', 10, "Rahim Khan");
    Student karim(1094, 'D', 11, "Karim Sing");

    cout << rahim.roll << endl;
    cout << rahim.cls << endl;
    cout << rahim.section << endl;
    cout << rahim.name << endl;

    cout << karim.roll << endl;
    cout << karim.cls << endl;
    cout << karim.section << endl;
    cout << karim.name << endl;

    return 0;
}
