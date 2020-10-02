#include<bits/stdc++.h>
using namespace std;
int main()
{
    float N,sum=0;
    int i,c=0;
    while(1)
    {
        scanf("%f",&N);
        if(N>=0 && N<=10)
        {
            c++;
            sum=sum+N;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(c==2){
          break;
        }

    }
    printf("media = %.2f\n",sum/2.00);

    return 0;
}

