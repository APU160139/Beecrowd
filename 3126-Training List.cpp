#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,i,s[1001],cnt=0;
    cin>>c;
    for(i=0;i<c;i++){
        cin>>s[i];
        if(s[i]==1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
