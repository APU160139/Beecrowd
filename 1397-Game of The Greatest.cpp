#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,x,y,c,c1,i;
   while(scanf("%d",&n)&& n!=0){
    c=0;
    c1=0;
    for(i=1;i<=n;i++){
      scanf("%d %d",&x,&y);
       if(x>y){
            c++;
        }
       else if(x<y){
           c1++ ;
        }
      }
         printf("%d %d\n",c,c1);
    }
    return 0;
}
