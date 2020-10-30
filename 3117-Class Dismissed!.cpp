#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,i;
    scanf("%d %d",&n,&k);
    for (i = 0; i < n; ++i){
        scanf("%d",&x);
        if (x <= 0)
            --k;
        if (k <= 0){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
