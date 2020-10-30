#include<bits/stdc++.h>
using namespace std;
int main ()
{
	char s[10010],c[10010];
	int i,j,t;
	long long int a,p=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++){
		scanf("%s %s",s,c);
		for(j=0;s[j];j++){
			a=c[j]-s[j];
			if(a<0){
               p=p+(a+26);
			}
			else{
              p=p+a;
			}
		}
		printf("%ld\n",p);
		p=0;
	}
	return 0;
}
