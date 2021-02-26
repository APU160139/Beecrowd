#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,p,i;
    while(cin>>n && n){
	b=10;
	for(i=0;i<n;i++){
      cin>>a;
		if(i!=0){
         b=b+min(a-p,10);
        }
      p=a;
	}
	cout<<b<<endl;
   }
  return 0;
}
