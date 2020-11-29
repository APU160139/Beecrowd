#include <bits/stdc++.h>
using namespace std;
long long d[100005];
int main ()
{
    long long a,c,v,t;
    while (cin>>a,a){
        for (c=0;c<a;++c)
          cin >>d[c];
          t=0;
        for(c=1;c<a;++c){
            if (d[c-1]<0)
                t= t+ -1*d[c - 1];
            else
                t=t+d[c-1];

            d[c]=d[c]+d[c - 1];
        }
        cout << t << '\n';
    }
    return 0;
}
