#include<bits/stdc++.h>
using namespace std;
int main()
{
      int t,s[10000],i,k,m,j;
      while(scanf("%d",&t)==1){
            m=0;
            j=0;
            if(t==0){
               break;
            }
      for(i=0;i<t;i++){
        scanf("%d",&s[i]);
       }
      for(k=0;k<t;k++){
        if(s[k]==0){
            m++;
        }
        else{
            j++;
        }
       }
        printf("Mary won %d times and John won %d times\n",m,j);
  }
  return 0;
}
