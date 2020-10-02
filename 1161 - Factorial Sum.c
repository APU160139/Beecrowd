#include<stdio.h>
int main()
{
    long long int M,N,i,j,s1=1,s2=1,sum;
    while(scanf("%lld %lld",&M,&N)!=EOF){
    for(i=1;i<=M;i++){

        s1=s1*i;
    }
    for(j=1;j<=N;j++){

        s2=s2*j;

    }

       sum=s1+s2;
    printf("%lld\n",sum);
    s1=s2=1;
    }
    return 0;
}

