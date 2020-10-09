#include<bits/stdc++.h>
using namespace std;
int main()
{
      int long long  x,y,rafa,beto,carl,t,i;
      while(scanf("%lld",&t)==1){
      for(i=1;i<=t;i++){
        scanf("%lld %lld",&x,&y);

        rafa=pow((3*x),2)+pow(y,2);
        beto=2*pow(x,2)+pow((5*y),2);
        carl=-100*x+(pow(y,3));

        if(rafa>beto && rafa>carl){
            printf("Rafael ganhou\n");
        }
        else if(beto>rafa && beto>carl){
            printf("Beto ganhou\n");
        }
        else{
            printf("Carlos ganhou\n");
        }

    }
  }
  return 0;
}
