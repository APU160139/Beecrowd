#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,x,i,c=0;
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        scanf("%ld",&x);
        if(x>=10 && x<=20){
            c++;
        }
    }
    printf("%d in\n%d out\n",c,n-c);
    return 0;
}
