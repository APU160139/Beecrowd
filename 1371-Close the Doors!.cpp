#include <bits/stdc++.h>
using namespace std;
int main()
{
	int ar[10000],j;
    long long i,n,k;
    while(cin>>k && k!=0){
	    n=0;
	    j=0;
        if(k==0){
          break;
        }
       for(i=1;i<=k;i+=2,j++){
          n=n+i;
          if(n>k){
            break;
          }
          if(i>1){
            cout << " ";
          }
          cout<< n ;
        }
        cout<<endl;
      }
    return 0;
}
