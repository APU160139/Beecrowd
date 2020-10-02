#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,n,i;
    double t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            t=x/(y*1.00);
            printf("%.1lf\n",t);
        }

    }
    return 0;

}

