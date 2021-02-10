#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,tmp,ans,v;
    while(scanf("%d %d",&n,&m)==2){
        ans=0;
        for(i=1;i<=n;i++){
            tmp=0;
            for(j=1;j<=m;j++){
                scanf("%d",&v);
                if(v>0){
                  tmp++;
                }
            }
            if(tmp==m){
              ans++;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
