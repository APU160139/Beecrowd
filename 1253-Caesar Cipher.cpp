#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,l;
    char s[52],a;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%s %d",s,&n);
        l=strlen(s);
        for(j=0;j<l;j++){
            a=s[j]-n;
            if(a<65){
              a=a+26;
            }
          printf("%c",a);
        }
        printf("\n");
    }
    return 0;
}
