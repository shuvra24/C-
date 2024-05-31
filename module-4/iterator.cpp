#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    // for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<endl;
    // }
    //cout<<*s.begin()<<endl; -> It is a pointer
    //cout<<*s.end()<<endl; -> pointer
    //string :: iterator it;-> g++ 14 er port auto keyword use kora jai
    for(auto it=s.begin();it<s.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}