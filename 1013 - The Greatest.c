#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,n,max;
  scanf("%d %d %d",&a,&b,&c);
  n=((a+b+abs(a-b))/2);
  max=((n+c+abs(n-c))/2);
  printf("%d eh o maior\n",max);
  return 0;
}
