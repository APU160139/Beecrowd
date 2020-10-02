#include<stdio.h>

int main()

{

    long long int a,b,c,i;

    while(scanf("%lld %lld",&a,&b)!=EOF){

    if(a>b){

    c=a-b;

    printf("%lld\n",c);

    }

    else{

        i=b-a;

         printf("%lld\n",i);

    }

    }

    return 0;
}
