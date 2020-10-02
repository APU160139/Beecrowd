#include<stdio.h>
int main()
{
    int A,B,C,t,i;
    while(scanf("%d %d %d",&A,&B,&C)==3){
     if(A!=B && A!=C){
        printf("A\n");
     }
     else if(B!=A && B!=C){
        printf("B\n");
     }
   else if(C!=A && C!=B){
        printf("C\n");
   }
   else{
     printf("*\n");
      }
     }
  return 0;
}

