#include<iostream>
using namespace std;
int main(){
    char v;
    cin>>v;
    switch(v%2){
        case 0:
            cout<<"even";
            break;
        case 1:
            cout<<"odd";
            break;
    }
    return 0;
}