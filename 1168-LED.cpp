#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[2000];
    int i,j,n,l,s=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",c);
        l=strlen(c);
        for(j=0;j<l;j++){
            if(c[j] == '1'){
                s=s+2;
            }
            else if(c[j] == '2'){
                s=s+5;
            }
            else if(c[j] == '3'){
                s=s+5;
            }
            else if(c[j] == '4'){
                s=s+4;
            }
            else if(c[j] == '5'){
                s=s+5;
            }
            else if(c[j] == '6')
            {
                s=s+6;
            }
            else if(c[j]== '7'){
                s=s+3;
            }
            else if(c[j] == '8'){
                s=s+7;
            }
            else if(c[j] == '9'){
                s=s+6;
            }
            else if(c[j] == '0'){
                s=s+6;
            }
        }
        printf("%d leds\n",s);
        s=0;
    }
    return 0;
}
