#include<stdio.h>

#include<math.h>

int main()

{
    float A,B,C,p,q,r,s,area;

    scanf("%f %f %f",&A,&B,&C);

    p=A+B;

    q=B+C;

    r=C+A;

    s=A+B+C;

    if(p>C && q>A && r>B){


    printf("Perimetro = %.1f\n",s);

    }

    else{

    area=((A+B)*C)/2;

    printf("Area = %.1f\n",area);

    }

    return 0;

}
