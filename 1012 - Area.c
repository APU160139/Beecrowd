#include<stdio.h>
int main()
{
    double A,B,C,a1,a2,a3,a4,a5,pi=3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    a1=(A*C)/2;
    a2=pi*C*C;
    a3=(A+B)*C/2;
    a4=B*B;
    a5=A*B;
    printf("TRIANGULO: %.3lf\n",a1);
    printf("CIRCULO: %.3lf\n",a2);
    printf("TRAPEZIO: %.3lf\n",a3);
    printf("QUADRADO: %.3lf\n",a4);
    printf("RETANGULO: %.3lf\n",a5);
  return 0;
}
