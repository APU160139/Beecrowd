#include<bits/stdc++.h>
using namespace std;
int main()
{
    int F1,F2,t,i,temp,temp1;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
      scanf("%d %d",&F1,&F2);
      if(F1<F2){
        temp=F1;
        F1=F2;
        F2=temp;
      }
      while(F1%F2!=0){
        temp1=F1;
        F1=F2;
        F2=temp1%F1;
      }
    printf("%d\n",F2);
    }
  return 0;
}
