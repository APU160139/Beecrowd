#include<stdio.h>
int ckpytha(int a,int b,int c);
int gcd(int a,int b);

int main()
{
      int a,b,c;

       while(scanf("%d %d %d",&a,&b,&c)==3){

         if( ckpytha(a,b,c)==1 && gcd(gcd(a,b),c)==1)
            printf("tripla pitagorica primitiva\n");
            else if(ckpytha(a,b,c))
            printf("tripla pitagorica\n");
            else
            printf("tripla\n");
       }
      return 0;
}

int ckpytha(int a,int b,int c)
{
            int max=a,s1=b,s2=c;
            if(b>max && b>c){
            max=b;
            s1=a;s2=c;
            return (max*max)==(s1*s1)+(s2*s2);
            }
            else if(c>max && c>b){
            max=c;
            s1=b;s2=a;
            return (max*max)==(s1*s1)+(s2*s2);
            }
          else
         return (max*max)==(s1*s1)+(s2*s2);
}

int gcd(int a,int b)
{
int tmp=0;
      while(b!=0){
      tmp=b;
      b=a%b;
      a=tmp;
      }
      return a ;
}

