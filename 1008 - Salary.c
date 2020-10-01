#include<stdio.h>
int main()
{
    int y,w;
    float x,salary;
    scanf("%d %d %f",&y,&w,&x);
    salary=w*x;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n",y,salary);
    return 0;
}
