#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p,q;
    double a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        p=ceil((a-2)/3);
        q=ceil((b-2)/3);
        cout<<p*q<<endl;
    }
    return 0;
}
