#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int mi = min(a,b);
    int mx = max(a,b);
    cout<<"minimum: "<<mi<<" "<<"maximum: "<<mx;
    return 0;
}