#include <bits/stdc++.h>

using namespace std;

int main()
{
	float n,sum;
	int i, c = 0;
	sum = 0;

	for(i = 1; i <= 6; i++){
		scanf("%f",&n);

		if(n>0){
			sum = sum + n;
			c++;
		}
	}
	printf("%d valores positivos\n",c);
	printf("%.1f\n",sum/c);

}

