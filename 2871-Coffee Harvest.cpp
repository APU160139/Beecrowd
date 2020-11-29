#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m,n,l,p,q,i,s,a;
	while(scanf("%d %d",&m,&n)!= EOF){
         l=m*n;
         q=0;
		 for(i=0;i<l;i++){
			scanf("%u", &s);
			q=q+s;
		}
		a = q;
		q = q / 60;
		p = a % 60;
		printf("%u saca(s) e %u litro(s)\n", q, p);
	}
return 0;
}
