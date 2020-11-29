#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,N,a[1000],b[1000],cnt;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&N);
        for(i=0;i<N;i++){
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        sort(a,a+N,greater<int>());
        cnt=0;
        for(i=0;i<N;i++)
        {
            if(a[i]==b[i])
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}

