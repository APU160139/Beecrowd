#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,in,a,i;
    bool ch;
    c=1;
    while(cin>>n&&n){
        ch =true;
        in=-1;
        for(i=1;i<=n;i++){
            cin>>a;
            if(a==i&&ch){
               in=i;
               ch=false;
            }
        }
        cout<<"Teste "<<c++<<endl;
        cout<<in<<endl<<endl;
    }
    return 0;
}
