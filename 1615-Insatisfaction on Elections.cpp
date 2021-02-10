#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,i,x,m;
   double p;
   scanf("%d",&t);
   while(t--){
      scanf("%d %lf",&n,&p);
      int c[n+1];
      memset(&c,0,sizeof c);
      m=0;
      for(i=0;i<p;++i){
        scanf("%d",&x);
        c[x]++;
         if(c[m]<c[x]){
          m=x;
         }
      }
      if(c[m]>p/2){
          printf("%d\n",m);
      }
      else{
          printf("-1\n");
      }
    }
   return 0;
}
