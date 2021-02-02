#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,j,i,k,pos,max1,max2,d;
   while(cin>>n&&n){
   int ar[n];
   max1=0;
   max2=0;
   pos=0;
   for(i=0;i<n;i++){
   	   cin>>ar[i];
   	if(max1<ar[i]){
       max1=ar[i];
     }
   }
   for(i=0;i<n;i++){
   	if(max2<ar[i] && ar[i]!=max1){
   		max2 = ar[i] ;
   		pos = i;
   	 }
   }
   	cout<<pos+1<<endl;
   }
	return 0;
}
