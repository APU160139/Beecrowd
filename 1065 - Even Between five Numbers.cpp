#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,X,c=0;
    for(i=1;i<=5;i++)
    {
        scanf("%d", &X);
        if(X%2==0){
         c++;
        }
    }
    printf("%d valores pares\n",c);
    return 0;
}
