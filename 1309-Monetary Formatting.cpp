#include <bits/stdc++.h>
using namespace std;
int main()
{
    char n1[10000];
    int i,len,j,c;
    while(scanf("%s",n1)!=EOF){
        scanf("%d",&c);
        len = strlen(n1);
        i=len-1;
        printf("$");
        for(j=0;j<len;j++){
           if(i%3==0 && j!=len-1 && i!=0){
             printf("%c,",n1[j]);
           }
          else{
            printf("%c",n1[j]);
          }
            i--;
       }
        if(c<10){
          printf(".0%d\n",c);
        }
        else{
          printf(".%d\n",c);
        }
    }
   return 0;
}
