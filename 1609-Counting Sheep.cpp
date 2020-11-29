#include<bits/stdc++.h>
using namespace std;
int ara[10000];
int main()
{
    int T,n,i,j,tmp,t;
    scanf("%d",&T);
    while(T--){
     tmp=0;
     scanf("%d",&n);
     for(i=0;i<n;i++){
        scanf("%d",&ara[i]);
        tmp++;
     }
    t=0;
    for(i=0;i<n;i++){
     t=ara[i];
      for(j=i+1;j<n;j++){
        if(t==ara[j]){
          tmp=tmp-1;
           break;
          }
        }
     }
   printf("%d\n",tmp);
   }
  return 0;
}
