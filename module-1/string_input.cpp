#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s[100];
    fgets(s,100,stdin);
    s[100]='\0';
    int l=strlen(s);
    cout<<l;
    return 0;
}