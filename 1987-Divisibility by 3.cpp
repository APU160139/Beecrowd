#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,n;
	while(scanf("%d %d",&n,&a)!=EOF){
	    b=0;
		while(a!=0){
				b=b+a%10;
				a=a/10;
		}
		if(b%3==0){
			printf("%d sim\n",b);
		}else{
			printf("%d nao\n",b);
		}
	}
	return 0;
}
