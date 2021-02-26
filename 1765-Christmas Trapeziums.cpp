#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,q,i;
    double a,b,ans;
    while(scanf("%d",&t)&&t){
        for(i=1;i<=t;++i){
            scanf("%d %lf %lf",&q,&a,&b);
            ans=(((a+b)*5.0)/ 2)*q;
            printf("Size #%d:\n",i);
            printf("Ice Cream Used: %.2lf cm2\n",ans);
        }
       printf("\n");
    }
    return 0;
}
