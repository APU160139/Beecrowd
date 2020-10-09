#include<bits/stdc++.h>
using namespace std;
int pytha(int a,int b,int c)
{
    int mx=a,s1=b,s2=c;
     if(b>mx && b>c){
        mx=b;
        s1=a;s2=c;
        return (mx*mx)==(s1*s1)+(s2*s2);
     }
     else if(c>mx && c>b){
        mx=c;
        s1=b;s2=a;
        return (mx*mx)==(s1*s1)+(s2*s2);
    }
     else
         return (mx*mx)==(s1*s1)+(s2*s2);
}

int gcd(int a,int b){
    int tmp=0;
    while(b!=0){
      tmp=b;
      b=a%b;
      a=tmp;
    }
      return a ;
}
int main()
{
      int a,b,c;

       while(scanf("%d %d %d",&a,&b,&c)==3){

         if( pytha(a,b,c)==1 && gcd(gcd(a,b),c)==1){
            printf("tripla pitagorica primitiva\n");
         }
         else if(pytha(a,b,c)){
            printf("tripla pitagorica\n");
         }
         else{
            printf("tripla\n");
         }
    }
      return 0;
}




