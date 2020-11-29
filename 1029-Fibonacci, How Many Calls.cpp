#include<bits/stdc++.h>
using namespace std;
int cnt;
int fibon(int d)
{
    cnt++;
    if(d==0)
    {
        return 0;
    }
    else if(d==1)
    {
        return 1;
    }
    else
    {
        return fibon(d-1)+fibon(d-2);
    }
}

int main()
{
    int t,n,i;
    scanf("%d",&t);
    for(i=1;i<=t; i++){
        cnt=0;
        scanf("%d",&n);
        printf("fib(%d) = %d calls = %d\n",n,cnt-1, fibon(n));
    }
    return 0;
}
