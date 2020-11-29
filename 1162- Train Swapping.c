#include<stdio.h>

int main()

{
    int t,n,a[100],i,j,k,l,count,temp;

    scanf("%d",&t);

    for(l=1;l<=t;l++){

        count=0;

        scanf("%d",&n);

        for(k=0;k<n;k++){

        scanf("%d",&a[k]);

           }

        for(i=0;i<n-1;i++){

            for(j=i+1;j<n;j++){

                if(a[i]>a[j]){

                    temp=a[i];

                    a[i]=a[j];

                    a[j]=temp;

                    count++;

                }
            }
        }

       printf("Optimal train swapping takes %d swaps.\n",count);

    }

    return 0;

}
