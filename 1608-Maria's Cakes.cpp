#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,d,i,b,q,in,Q,p[100],c[100],j,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&d,&i,&b);
		memset(c,0,sizeof(c));
		for(j=0;j<i;++j){
			scanf("%d",&p[j]);
		}
		for(j=0;j<b;++j){
			scanf("%d",&q);
			for(k=0;k<q;++k){
				scanf("%d %d",&in,&Q);
				c[j]=c[j]+p[in]*Q;
			}
		}
		sort(c,c+b);
		printf("%d\n",d/c[0]);
	}
	return 0;
}
