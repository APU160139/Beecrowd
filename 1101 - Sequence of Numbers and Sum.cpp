#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,sum=0;
    while(1)
    {
           scanf("%d%d",&m,&n);
            if(m<=0||n<=0)
           {
               break;
           }
          else if(m>n)
           {
               sum=0;
               for(i=n;i<=m;i++)
               {
                   sum=sum+i;
                   printf("%d ",i);
               }
               printf("Sum=%d\n",sum);
           }
          else if(n>m)
           {
               sum=0;
               for(i=m;i<=n;i++)
               {
                   sum=sum+i;
                   printf("%d ",i);
               }
               printf("Sum=%d\n",sum);
           }

    }
    return 0;

}

