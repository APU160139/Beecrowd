#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,c,v,i;
    while(cin>>n && n)
    {
        x=0;
        for(i=0;i<n;++i)
        {
            cin>>c>>v;
            x=x+v/2;
        }
        cout<<x/2<<endl;
    }
    return 0;
}
