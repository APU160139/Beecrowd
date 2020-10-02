#include<stdio.h>
int main()
{
    int n,s,t,v,k;
    scanf("%d",&n);
    s=n/365;
    t=n-(s*365);
    v=t/30;
    k=t-(v*30);
     printf("%d ano(s)\n",s);
     printf("%d mes(es)\n",v);
     printf("%d dia(s)\n",k);

    return 0;
}
