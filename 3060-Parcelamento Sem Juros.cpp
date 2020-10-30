#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v,p,x,y,i;
    scanf("%d %d",&v,&p);
    if (v % p == 0){
        x = v / p;
        for (i = 0; i < p; ++i){
            printf("%d\n", x);
        }
    }
    else{
         x = v % p;
         y = v / p;
         for (i = 0; i < x; ++i){
          printf("%d\n", y + 1);
         }
         for (i = 0; i < p - x; ++i){
            printf("%d\n", y);
        }
    }

    return 0;
}
