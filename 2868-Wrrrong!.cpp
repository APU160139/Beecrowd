#include <bits/stdc++.h>
using namespace std;
int main ()
{

	int t,i,j,A,B,r,d;
	char c,s[1000];
	scanf("%d",&t);
	for(j=1;j<=t;j++){
       scanf("%d %c %d = %d",&A,&c,&B,&d);
       if (c == '+'){
            r = A + B;
		}
       else if (c == '-'){
            r = A - B;
		}
       else if (c == 'x'){
          r = A * B;
		}
		i = 1;
		r = abs(d - r);
		s[0] = 'E';
		while (i <= r)
            s[i++] = 'r';
            s[i++] = 'o';
            s[i++] = 'u';
            s[i++] = '!';
            s[i] = '\0';

		printf("%s\n",s);

	}

}
