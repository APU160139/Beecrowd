#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,b;
    scanf("%lld",&t);
    while(t--){
       scanf("%lld",&b);
       if(b==1){
       	printf("%lld\n",b);
       }
       else if(b%2==0){
       	printf("%lld\n",b/2);
       }
       else{
       	printf("%lld\n",(b/2)+1);
       }
   }
   return 0;
}
