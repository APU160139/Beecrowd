#include<bits/stdc++.h>
using namespace std;
int main()
{
	int s,i,t,n,a,b;
	t=0;
	while(scanf("%d",&n),n){
		s=0;
		printf("Teste %d\n",++t);
		for(i=0;i<n;++i){
			scanf("%d %d",&a,&b);
			s+=a;
			s-=b;
			printf("%hd\n",s);
		}
		printf("\n");
	}
 return 0;
}
