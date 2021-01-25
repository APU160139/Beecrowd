#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=0,a,b,f;
    while(cin>>n && n!=0){
      a=0;
      b=1;
      f=1;
      while(n--){
        f=a+b;
        a=b;
        b=f;
       }
    cout <<f<<endl;
    }
    return 0;
}
