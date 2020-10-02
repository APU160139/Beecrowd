#include<stdio.h>

int main()

{

    double n1,n2,n3;

    int n,b,c,d,e,f,g,h,i,j,k,l,m,t;

    scanf("%lf",&n1);

    n=n1;

    b=n/100;

    c=n-(b*100);

    d=c/50;

    e=c-(d*50);

    f=e/20;

    g=e-(f*20);

    h=g/10;

    i=g-(h*10);

    j=i/5;

    k=i-(j*5);

    l=k/2;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n",b);

    printf("%d nota(s) de R$ 50.00\n",d);

    printf("%d nota(s) de R$ 20.00\n",f);

    printf("%d nota(s) de R$ 10.00\n",h);

    printf("%d nota(s) de R$ 5.00\n",j);

    printf("%d nota(s) de R$ 2.00\n",l);

    t=(b*100)+(d*50)+(20*f)+(h*10)+(j*5)+(l*2);

    n2=(n1-t)*100;

    int w,x,y,z,z1,z2,z3;

    float n4,n5,n6,n7;

    w=n2/100;

    n3=n2-(w*100);

    y=n3/50;

    n4=n3-(y*50);

    z=n4/25;

    n5=n4-(z*25);

    z1=n5/10;

    n6=n5-(z1*10);

    z2=n6/5;

    n7=n6-(z2*5);

    z3=n7/1;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n",w);

    printf("%d moeda(s) de R$ 0.50\n",y);

    printf("%d moeda(s) de R$ 0.25\n",z);

    printf("%d moeda(s) de R$ 0.10\n",z1);

    printf("%d moeda(s) de R$ 0.05\n",z2);

    printf("%d moeda(s) de R$ 0.01\n",z3);

    return 0;

    }
