#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,a,b;
    int c;
    scanf("%f",&n);
    if(n>=0&&n<=400.00){
        a=(n+(n*.15));
        b=(n*.15);
        c=15;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",a,b,c);
    }
    else if(n>=400.01&&n<=800.00){
        a=n+(n*.12);
        b=(n*.12);
        c=12;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",a,b,c);
    }
     else if(n>=800.01&&n<=1200.00){
        a=n+(n*.1);
        b=(n*.1);
        c=10;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",a,b,c);
    }
     else if(n>=1200.01&&n<=2000.00){
        a=n+(n*.07);
        b=(n*.07);
        c=7;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",a,b,c);
    }
     else if(n>2000.00){
        a=n+(n*.04);
        b=(n*.04);
        c=4;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %\n",a,b,c);
    }
    return 0;
}
