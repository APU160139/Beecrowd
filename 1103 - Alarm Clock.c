#include<stdio.h>

int main()

{
    int H1,H2,M1,M2,total,h,h1,m;

    while(scanf("%d %d %d %d",&H1,&M1,&H2,&M2)==4){

        if(H1==0 && M1==0 && H2==0 && M2==0){

            break;
        }

       total=60*24;

       h=H1*60+M1;

       h1=H2*60+M2;

       if(h>h1){

       h1=total+h1;

       }

       printf("%d\n",h1-h);

       }

    return 0;
}

