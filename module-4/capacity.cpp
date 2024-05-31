#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "bangaldesh";
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    s="jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
    cout<<s.capacity()<<endl;
    s.clear();
    cout<<s<<endl;
    if(s.empty()==true) cout<<"Empty"<<endl;
    else cout<<"Not Empty";

    s="hello_world";
    s.resize(5);
    cout<<s<<endl;
    cout<<s.size()<<endl;
    s.resize(10,'X');
    cout<<s<<endl;
    return 0;
}