#include <bits/stdc++.h>
using namespace std;
int main()
{
    short bit,aux;
	unsigned short q50,q10,q5,qts,T;
    T=0;
	while (true)
	{
		scanf("%hu",&bit);
		if (!bit){
			break;
		}
		q50=q10=q5=qts=0;

		q50=bit/50;
		bit=bit%50;

		q10=bit/10;
		bit=bit%10;

		q5=bit/5;
		bit=bit%5;

		qts=bit;

		printf("Teste %hu\n",++T);
		printf("%hu %hu %hu %hu\n\n",q50,q10,q5,qts);
	}
  return 0;
}
