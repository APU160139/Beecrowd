#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,c,d,i;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        c=i*i;
        d=i*i*i;
        printf("%d %d %d\n",i,c,d);
    }
    return 0;
}
