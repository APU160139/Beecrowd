#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,i;
 char c,d;
 while(cin >> n && n != 0) {
   d= 'N';
   for(i=0;i<n;++i){
   cin >> c;
   if(c == 'D' && d== 'N'){
    d='L';
   }
   else if(c == 'E' && d== 'N'){
    d='O';
   }
   else if(c == 'D' && d== 'O'){
    d='N';
   }
   else if(c == 'E' && d== 'O'){
    d='S';
   }
   else if(c == 'D' && d== 'L'){
    d='S';
   }
   else if(c == 'E' && d== 'L'){
    d='N';
   }
   else if(c == 'D' && d== 'S'){
    d='O';
   }
   else{
    d='L';
   }
  }
  cout <<d<< endl;
 }

 return 0;
}
