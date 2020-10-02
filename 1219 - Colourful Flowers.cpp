#include <bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,c;
 double r1,r2,r3,v1,v2,ap,as,s;
 while(cin>>a>>b>>c)
 {
    s=(a+b+c)/2.0;
    v1=sqrt(s*(s-a)*(s-b)*(s-c));
    r1=(a*b*c)/(4*v1);
    as=r1*r1*acos(-1);
    ap=as-v1;
    r2=v1/s;
    r3=r2*r2*acos(-1);
    v2=v1-r3;
    printf("%.4lf %.4lf %.4lf\n",ap,v2,r3);
 }
return 0;

}

