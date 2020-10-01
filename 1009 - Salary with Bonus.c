#include<stdio.h>
int main()
{
   char x;
   double y,z,k,l;
   scanf("%s %lf %lf",&x,&y,&z);
   l=(z*15/100);
   k=y+l;
   printf("TOTAL = R$ %0.2lf\n",k);
   return 0;
}
