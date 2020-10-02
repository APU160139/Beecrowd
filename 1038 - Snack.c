#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    switch(x){

   case 1:
           printf("Total: R$ %.2f\n",4.00*y);
           break;

   case 2:
          printf("Total: R$ %.2f\n",4.50*y);
           break;
   case 3:
          printf("Total: R$ %.2f\n",5.00*y);
           break;

   case 4:
           printf("Total: R$ %.2f\n",2.00*y);
           break;
   case 5:
           printf("Total: R$ %.2f\n",1.50*y);
           break;

   default:
           break;


    }
    return 0;
}
