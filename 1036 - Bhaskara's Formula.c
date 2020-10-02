#include<stdio.h>

#include<math.h>

int main()

{
    double A,B,C,d,l,p,R1,R2;

    scanf("%lf %lf %lf",&A,&B,&C);


    d=B*B-4*A*C;

    l=sqrt(d);

    p=2*A;

    R1=(-B+l)/p;

    R2=(-B-l)/p;

    if(d>0 && A!=0){

        printf("R1 = %.5lf\n",R1);

        printf("R2 = %.5lf\n",R2);

    }

    else{

        printf("Impossivel calcular\n");
    }

    return 0;

}

