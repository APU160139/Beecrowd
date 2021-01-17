#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101];
    double d,t,n=0.0;
    while(gets(s)){
        scanf("%lf", &d);
        t=t+d;
        n=n+1.0;
    }
    printf("%.1lf\n",t/n);
    return 0;
}
