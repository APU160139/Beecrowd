#include <bits/stdc++.h>
using namespace std;
int n;
int a[55];
int solution()
{
	int h,m,i,p;
	h=0;
	m=0;
	for (i=0;i<n;i++)
	{
	    p=h+a[i];
		h = max(0,p);
		m = max(m,h);
	}
	return m;
}

int main()
{
	int c,i;
	while(scanf("%d",&n)==1){
		scanf("%d",&c);
		for (i=0;i<n;i++){
			scanf("%d",&a[i]);
			a[i]=a[i]-c;
		}
		cout << solution() << '\n';
	}
}
