#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,j,n;
    scanf("%d", &N);
    n=N*4-1;
    for(i=1;i<n;i=i+4)
    {
        for(j=i;j<=i+2;j++)
        {
            printf("%d ",j);
        }
        printf("PUM\n");
    }
    return 0;
}
