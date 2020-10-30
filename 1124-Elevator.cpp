#include<bits/stdc++.h>

using namespace std;

void max(int &a, int &b){

    int temp;

    if( b > a){

        temp = b;

        b = a;

        a = temp;

    }
}
int main()
{
    int L,C,R1,R2,R,p;

    while( scanf("%d %d %d %d",&L,&C,&R1,&R2)==4){

        if( L==0 && C==0 && R1==0 && R2==0 ){

          break;

        }

        R=R1+R2;

        max(L,C);

        max(R1,R2);

        p=(L-R)*(L-R)+(C-R)*(C-R);

        if((C>=2*R1) && (p>=R*R )){

           printf("S\n");

        }

        else{

           printf("N\n");

        }
    }
    return 0;
}
