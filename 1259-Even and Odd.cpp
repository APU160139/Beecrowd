#include<bits/stdc++.h>
using namespace std;
int s[1000000],c[1000000];
int main()
{
    int n,p,q,a,i;
    scanf("%d", &n);
    p=0;
    q=0;
    for(i=0;i<n;i++){
        scanf("%d",&a);
        if(a%2==0){
            s[p] = a;
            p++;
        }
        else{
            c[q] = a;
            q++;
        }
    }
    sort(s,s+p);
    sort(c,c+q);
    for(i=0;i<p;i++){
        printf("%d\n", s[i]);
    }
    for(i=0;i<q;i++){
        printf("%d\n",c[q-i-1]);
    }
   return 0;
}
