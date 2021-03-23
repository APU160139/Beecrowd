#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101];
    int tmp,c=0,sum=0,l,i;
    gets(s);
    l=strlen(s);
    for(i=0;i<l;++i){
        tmp=(int)(s[i]-48);
        if(!tmp){
           sum=sum+9;
           c--;
        }
        else{
         sum=sum+tmp;
        }
        c++;
    }
    printf("%.2f\n",(float)sum/c);
    return 0;
}
