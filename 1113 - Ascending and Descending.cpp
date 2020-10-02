#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    while(1)
    {
           scanf("%d%d",&m,&n);
            if(m==n)
           {
               break;
           }
          else if(m>n)
           {
               printf("Decrescente\n");
           }
          else if(n>m)
           {
               printf("Crescente\n");
           }

    }
    return 0;

}

