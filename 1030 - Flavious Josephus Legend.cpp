#include<bits/stdc++.h>
using namespace std;
int jos(int n,int k)
{
      if(n==1){
        return 1;
      }
      else{
        return (jos(n-1,k)+k-1)%n+1;
      }

}
int main()
{
      int t,n,k,i;
      scanf("%d",&t);
      for(i=1;i<=t;i++){
        scanf("%d %d",&n,&k);
        int tmp=jos(n,k);
        printf("Case %d: %d\n",i,tmp);
        }

      return 0;
}

