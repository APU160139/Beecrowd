#include<stdio.h>

int main()

{
    int N,d;

    while(scanf("%d",&N)==1){

    if(N==0){

       break;
    }

    else{

        d=(N*(N+1)*(2*N +1))/6;

        printf("%d\n",d);

    }
}

return 0;

}

