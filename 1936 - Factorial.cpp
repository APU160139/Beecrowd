#include <bits/stdc++.h>
using namespace std;
int main()
{
   long long int m,n,t1,t2;
   int i;
   while(scanf("%lld %lld",&m,&n)!=EOF){
      t1 = 1;
      t2 = 1;
      for (i = m; i > 0; --i){
       t1=t1*m;
       m--;
      }
      for (i = n; i > 0; --i){
       t2=t2*n;
       n--;
      }
      printf("%lld\n",t1+t2);
    }
  return 0;
}
