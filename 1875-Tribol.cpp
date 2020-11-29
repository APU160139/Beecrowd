#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,t1,i,q;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        int v[3];
        memset(v,0,sizeof(v));
        string p[3]={"green","blue","red"},h,a;
        scanf("%d",&t1);
        while(t1--){
            cin>>h>>a;
            if(h=="G")
            {
                if (a == "R")
                    ++v[0];
                else
                   v[0] += 2;
            }
            else if(h == "B")
			{
				if (a == "G")
                    ++v[1];
				else
				    v[1] += 2;
			}
			else
			{
				if (a == "B")
                    ++v[2];
				else
				   v[2] += 2;
			}
        }
        for(int i=0;i<3;i++)
            {
                q=0;
                while(q<3-i-1)
                {
                    if(v[q]>v[q+1])
                    {
                        swap(v[q],v[q+1]);
                        swap(p[q+1],p[q]);
                    }
                    q++;
                }
            }
        if (v[0] == v[1] && v[0] == v[2]){
           printf("trempate\n");
        }
        else if(v[2]==v[1]){
          printf("empate\n");
        }
        else{
          cout<<p[2]<<endl;
        }
    }
    return 0;
}
