#include<stdio.h>
int main()
{
   float A,B,C,x,y,z,p,MEDIA;
   scanf("%f %f %f",&A,&B,&C);
   x=A*2;
   y=B*3;
   z=C*5;
   p=x+y+z;
   MEDIA=p/(2+3+5);
   printf("MEDIA = %0.1f\n",MEDIA);
   return 0;
}
