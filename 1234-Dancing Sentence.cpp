#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,l;
    bool d;
    while(getline(cin,s)){
        d=0;
        l=s.size();
         for(i=0;i<l;i++){
            if(d==0){
                if(s[i]>='a' && s[i]<='z'){
                    s[i]=s[i]-32;
                    d=1;
                }
                if(s[i]>='A' && s[i]<='Z'){
                   d=1;
                }
            }
            else if(d==1){
                if(s[i]>='A' && s[i]<='Z'){
                    s[i]=s[i]+32;
                    d=0;
                }
                if(s[i]>='a' && s[i]<='z'){
                    d=0;
                }
            }

        }
        cout<<s<<endl;
    }

    return 0;
}

