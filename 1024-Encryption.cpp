#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n,p;
    char ch[1000],s[1000];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++){
        gets(ch);
        l = strlen(ch);
        for(j=0;j<l;j++){
            if((ch[j]>='A' && ch[j]<='Z')||(ch[j]>='a' && ch[j]<='z')){
                ch[j]=ch[j]+3;
            }
        }
        p=l-1;
        for(k=0;k<l;k++){
            s[k]=ch[p];
            p--;
        }
        s[k]='\0';
        for(m=l/2;m<l;m++){
            s[m]=s[m]-1;
        }
        printf("%s\n",s);
    }
    return 0;
}

