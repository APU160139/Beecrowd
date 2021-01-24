#include<bits/stdc++.h>
using namespace std;
int a[10000];
int main()
{
    int n,m,t,c,i;
    while(scanf("%d %d",&n,&m) && n!=0 && m!=0){
      memset(a,0,sizeof(a));
      c=0;
      for(i=0;i<m;++i){
        scanf("%d",&t);
        a[t]++;
        if (a[t] == 2)
          c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
