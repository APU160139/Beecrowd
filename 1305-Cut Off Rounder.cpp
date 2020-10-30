#include<bits/stdc++.h>
using namespace std;
int main ()
{
	char n[100],c[100];
	int i;
	double f,cf;
	while (scanf("%s %s",n,c) != EOF){
          i = atoi(n);
		  f = atof(n) - i;
		  cf= atof(c);
		if (f>cf){
           i++;
		}
		printf("%d\n",i);
	}
 return 0;
}
