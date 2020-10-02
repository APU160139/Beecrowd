#include <bits/stdc++.h>
using namespace std;
int main(){
     int a,b,c,d;
     scanf("%d %d",&a,&b);
     if(a >= b){
       c= (24 - a) + b ;
       printf("O JOGO DUROU %d HORA(S)\n",c);
     }

     else{
        d=b-a;
        printf("O JOGO DUROU %d HORA(S)\n",d);
    }

    return 0;
}
