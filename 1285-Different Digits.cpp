#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,n,i,j,k,d,q,f,s[4];
    while(scanf("%d %d",&a,&b) == 2){
      q=0;
      for(i=a;i<=b;i++){
        d=0;
        f=0;
        n=i;
        while(n!=0){
          s[d]=n%10;
          n=n/10;
          d++;
        }
        for(j=0;j<d;j++){
          for(k=j+1;k<d;k++){
            if(s[j]==s[k]){
                f=1;
            }
         }
        }
        if(f==0){
          q++;
         }
       }
      printf("%d\n",q);
  }
    return 0;
}
