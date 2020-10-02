#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a=0,b=0,c=0;
    while(scanf("%d",&n)){
        if(n==1){
            a++;
        }
        if(n==2){
            b++;
        }
        if(n==3){
            c++;
        }
        if(n==4){
            break;
        }
    }
        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n",a);
        printf("Gasolina: %d\n",b);
        printf("Diesel: %d\n",c);
    return 0;
}
