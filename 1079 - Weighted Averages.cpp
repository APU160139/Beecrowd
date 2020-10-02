#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d,x;
    int N;
    scanf("%d", &N);
    for(a=1;a<=N;a++)
    {
        scanf("%lf%lf%lf",&x,&b,&c);
        d=((x/5.0)+((b*3.0)/10.0)+(c/2.0));
        printf ("%.1lf\n",d);
    }
    return 0;
}

