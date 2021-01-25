#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,d,total,i;
    string s;
    while(cin>>t>>n &&t)
    {
        total=3*n;
        d=0;
        for(i=0;i<t;i++){
            cin>>s>>p;
            d=d+p;
        }
        cout<<total-d<<endl;
    }
    return 0;
}
