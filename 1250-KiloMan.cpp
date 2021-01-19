#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h[1000],i,t,n,c=0;
    char p[10000];
    scanf("%d",&t);
    while(t--){
        c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&h[i]);
        }
        scanf("%s",p);
        for(i=0;i<n;i++){
            if(h[i]>0&&h[i]<=2&&p[i]=='S'){
                c++;
            }
            else if(h[i]>2&&p[i]=='J'){
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
