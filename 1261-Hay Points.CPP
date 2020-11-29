#include <bits/stdc++.h>
using namespace std;
map<string,int>map,d;
int main()
{
	int m,n,v,s,i;
	string w;
	while(cin>>m>>n){
	 for(i=0;i<m;i++){
			cin >>w>>v;
			d[w]=v;
		}
         for(i=0;i<n;i++){
			s = 0;
			while(cin >> w && w.compare(".") != 0)
            s=s+d[w];
			printf("%d\n",s);
		}
	}
	return 0;
}
