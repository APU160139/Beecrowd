#include<stdio.h>

int main()

{

  int a,b,c,min,mid,last;

  scanf("%d %d %d",&a,&b,&c);


  if(a<b && a<c){

    min=a;

  }

  else if(b<a && b<c){

    min=b;

  }

  else{

    min=c;

  }

  if(min==a && b<c){

    mid=b;

  }

  else{

    mid=c;

  }

   if(min==b && a<c){

    mid=a;

  }

  else{

    mid=c;

  }

  if(min==c && a<b){

    mid=a;

  }

  else{

    mid=b;

  }


 if(min==a && mid==b){

    last=c;

  }

  else if(min==a && mid==c){

    last=b;

  }

  else if(min==b && mid==a){

    last=c;

  }

  else if(min==b && mid==c){

    last=a;

  }

  else if(min==c && mid==b){

    last=a;

  }

  else if(min==c && mid==a){

    last=b;

  }

  printf("%d\n%d\n%d\n",min,mid,last);

  printf("\n");

  printf("%d\n%d\n%d\n",a,b,c);

  return 0;

}
