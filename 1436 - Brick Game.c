#include<stdio.h>

int main()

{

    int t,n,b[15],i,j,temp,k,l,c;

    scanf("%d",&t);

    for(c=1;c<=t;c++){

        scanf("%d",&n);

        for(l=0;l<n;l++){

        scanf("%d",&b[l]);

        }
         for(i=0;i<n-1;i++){

                for(j=i+1;j<n;j++){

                    if(b[i]>b[j]){

                        temp=b[i];

                        b[i]=b[j];

                        b[j]=temp;
                    }
                }
           }

       printf("Case %d: %d\n",c,b[n/2]);

      }

    return 0;

    }






