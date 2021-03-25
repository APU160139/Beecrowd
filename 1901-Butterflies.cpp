#include<bits/stdc++.h>
using namespace std;
set<int>s;
int main()
{
    int n,x,y,i,j,v[205][205];
    while(cin>>n){
        s.clear();
        for(i=0;i<n;++i){
            for(j=0;j<n;++j){
            cin>>v[i][j];
            }
        }
        n=n*2;
        while(n--){
            cin>>x>>y;
            --x;
            --y;
            s.insert(v[x][y]);
        }
        cout <<s.size()<<'n';
    }
    return 0;
}
