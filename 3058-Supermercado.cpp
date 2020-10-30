#include <bits/stdc++.h>
#define INF 0x3f3f3f3f
using namespace std;
int main(){
    int n,i,c;
    double g,m,p;
    scanf("%d",&n);
    m = (double)INF;
    for (i = 0 ; i < n; ++i){
        scanf("%lf %d",&g,&c);
        p=(g*1000.0)/c;
        m = min(m,p);
    }
    printf("%.2lf\n",m);
    return 0;

}
