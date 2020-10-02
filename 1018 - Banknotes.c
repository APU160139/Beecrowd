#include<stdio.h>
int main()
{
    int n,m,o,p,q,r,s,t,u,v,w,x,y,z;
    scanf("%d",&n);
    m=n/100;
    o=n-(m*100);
    p=o/50;
    q=o-(p*50);
    r=q/20;
    s=q-(r*20);
    t=s/10;
    u=s-(t*10);
    v=u/5;
    w=u-(v*5);
    x=w/2;
    y=w-(x*2);
    z=y/1;

    printf("%d nota(s) de R$ 100.00\n",m);
    printf("%d nota(s) de R$ 50.00\n",p);
    printf("%d nota(s) de R$ 20.00\n",r);
    printf("%d nota(s) de R$ 10.00\n",t);
    printf("%d nota(s) de R$ 5.00\n",v);
    printf("%d nota(s) de R$ 2.00\n",x);
    printf("%d nota(s) de R$ 1.00\n",z);
    return 0;

}
