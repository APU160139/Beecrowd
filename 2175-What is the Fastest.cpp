#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x,y,z;
    scanf("%f %f %f",&x,&y,&z);
    if(x==y||y==z||x==z){
        printf("Empate\n");
    }
    else if(x<y&&x<z){
        printf("Otavio\n");
    }
    else if(y<x&&y<z){
       printf("Bruno\n");
    }
    else if(z<y&&z<x){
        printf("Ian\n");
    }
    return 0;
}
