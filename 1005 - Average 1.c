#include<stdio.h>
int main()
{
   float A,B,x,y,z,MEDIA;
   scanf("%f %f",&A,&B);
   x=A*3.5;
   y=B*7.5;
   z=x+y;
   MEDIA=z/(3.5+7.5);
   printf("MEDIA = %0.5f\n",MEDIA);
   return 0;
}
