#include<bits/stdc++.h>
using namespace std;
int main(){
 long int m,n,x,y,i,k;
 while(scanf("%ld",&k)==1){
    if(k==0){
        break;
    }
    scanf("%ld %ld",&x,&y);
    for(i=1;i<=k;i++){
        scanf("%ld %ld",&m,&n);
        if(x==m || y==n){
            printf("divisa\n");
        }
        else if(x<m && y<n){
            printf("NE\n");
        }
        else if(x>m && y<n){
            printf("NO\n");
        }
         else if(x>m && y>n){
            printf("SO\n");
        }
         else if(x<m && y>n){
            printf("SE\n");
        }
    }
 }
 return 0;

}

