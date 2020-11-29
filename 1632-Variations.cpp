#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int t,i,q;
	char s[20];
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		i = 0;
		q = 1;
		while (s[i]){
			if (tolower(s[i])=='a' || tolower(s[i])=='e' || tolower(s[i])=='i' || tolower(s[i])=='o' || tolower(s[i])=='s'){
				q=q*3;
			}
			else{
				q=q*2;
			}

			i++;
		}
		printf("%d\n",q);
	}
 return 0;
}
