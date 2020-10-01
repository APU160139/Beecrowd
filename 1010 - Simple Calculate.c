#include<stdio.h>
int main()
{
    int i,l,r,p;
    float h,k,v;
    scanf("%d %d %f",&i,&l,&h);
    scanf("%d %d %f",&r,&p,&k);
    v=(l*h)+(p*k);
    printf("VALOR A PAGAR: R$ %.2f\n",v);
    return 0;

}
