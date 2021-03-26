#include <bits/stdc++.h>
using namespace std;
int main()
{
	int v[506],x,n,k,i,m,p;
	while (cin>>n>>k)
	{
		for(i=0;i<n;++i){
          v[i] = 0;
		}
		for(i=0;i<n*k;++i){
			cin>>x;
			v[i%n]+=x;
		}
		m=v[0];
		p=0;
		for (i=1;i<n;++i){
			if (v[i]>= m){
				m=v[i];
				p=i;
			}
		}
		cout<<p+1<<'\n';
	}
	return 0;
}
