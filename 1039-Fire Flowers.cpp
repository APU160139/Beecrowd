#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,x1,y1,r2,x2,y2,s,s1;
    float d;
    while((scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2))!=EOF){
        s=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
        d= sqrt(s);
        s1=r1-d;
        if(s1>=r2){
            printf("RICO\n");
        }
        else{
            printf("MORTO\n");
        }
    }
  return 0;
}
