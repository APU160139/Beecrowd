#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,t,m,i;
    string p,tmp;
    while(cin>>n&&n){
        m=10000000;
        for(i=0;i<n;++i){
            cin>>p>>a>>t;
            if((a-t)<m){
                m=(a-t);
                tmp=p;
            }
        }
        cout<<tmp<<'\n';
    }
    return 0;
}
