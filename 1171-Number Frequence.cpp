#include<bits/stdc++.h>
#define N 2021
using namespace std;
int main()
{
      int test,n,i,j,a[N];
        while(scanf("%d",&test)==1){
            memset(a,0,sizeof a);
            for(i=1;i<=test;i++){
                scanf("%d",&n);
                a[n]++;
              }
            for(i=0;i<N;i++)
              for(j=0;j<a[i];j++){
                 if(a[i]>0)
                   printf("%d aparece %d vez(es)\n",i,a[i]);
                   break;
            }
        }
  return 0;
}
