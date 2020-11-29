#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,i,j;
    char s1[50],s2[50];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %s",&s1,&s2);
        a=0;
        b=0;
        for(j=0;j<50;j++){
         if(s1[j]=='\0'){
            a=1;
          }
        if(s2[j]=='\0'){
            b = 1;
          }
        if(a==1 && b==1){
            break;
        }
        if(a==0){
            printf("%c",s1[j]);
        }
        if(b==0){
            printf("%c",s2[j]);
        }
      }
            printf("\n");
    }

    return 0;
}
