#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,s,i,j,c[15];
	while(scanf("%d %d",&m,&n)==2){
		s=m+n;
		if(m==0 && n==0){
            break;
		}
		for(i=0;i<11;i++){
			c[i] = s%10;
			s=s/10;
		}
		for(j=10;j>=0;j--){
			if(c[j] != 0){
				printf("%d",c[j]);
			}
		}
		printf("\n");
	}
}

