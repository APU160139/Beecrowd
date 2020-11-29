#include <bits/stdc++.h>
using namespace std;
int gf[100000],i;
int cmp(const void *a,const void *b){
    return (*(int*)b - * (int*)a );
}

int main()
{
    int t,n,c,m,r,i;
    cin>>t;
    while(t--) {
		r = 0;
	    cin >> n >> c >> m;
		for(i=0;i<m;i++)
			scanf("%d", &gf[i]);
		    qsort(gf, m, sizeof (int), cmp);

		for(i=0;i<m;i += c)
			r += gf[i] * 2;

		printf("%d\n", r);
	}
	return 0;
}
