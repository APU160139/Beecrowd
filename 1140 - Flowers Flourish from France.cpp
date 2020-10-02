#include <bits/stdc++.h>
using namespace std;
int main()
{
    char st[1500],s[2];
    int len, i,j,c;
    while(1)
    {
        gets(st);
        if(st[0]=='*'){
           break;
        }
        else
        {
            c=1;
            len=strlen(st);
            if(st[0]>=65 && st[0]<=90)
                s[0]=st[0]+32;
            else if(st[0]>=97 && st[0]<=122)
                s[0]=st[0]-32;
            for(i=1; i<len; i++)
            {
                if(st[i]==' ')
                {
                    if(st[i+1]==st[0] || st[i+1]==s[0])
                        continue;
                    else{
                        c=0;
                        break;
                    }
                }
            }
            if(c==1){
              printf("Y\n");
            }
            else{
             printf("N\n");
            }
        }
    }
    return 0;
}

