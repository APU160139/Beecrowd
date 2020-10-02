#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y,i,temp;
    scanf("%d %d",&X,&Y);
    if(X>Y){
        temp =X;
        X= Y;
        Y= temp;
    }
    X++;
    for(i =X;i<Y;i++){
        if(i%5 == 2 || i%5 == 3){
           printf("%d\n",i);
        }
    }
    return 0;
}

