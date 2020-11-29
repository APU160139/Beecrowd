#include<bits/stdc++.h>
using namespace std;
int main ()
{
  int t,i;
  char s[10],r[10];
  scanf("%d",&t);
  for(i=1;i<=t;i++){
    scanf(" %s %s",r,s);

    if (strcmp(r,s) == 0){
      printf("empate\n");
    }
    else if (strcmp(r,"spock") == 0 && strcmp(s,"pedra") == 0){
      printf("rajesh\n");
    }
    else if (strcmp(r,"lagarto") == 0 && strcmp(s,"spock") == 0){
      printf("rajesh\n");
    }
    else if (strcmp(r,"tesoura") == 0 && strcmp(s,"lagarto") == 0){
      printf("rajesh\n");
    }
    else if (strcmp(r,"papel") == 0 && strcmp(s,"spock") == 0){
      printf("rajesh\n");
    }
    else if (strcmp(r,"tesoura") == 0 && strcmp(s,"papel") == 0){
      printf("rajesh\n");
    }
    else if (strcmp(r,"papel") == 0 && strcmp(s,"pedra") == 0){
      printf("rajesh\n");
    }
    else if (strcmp(r,"lagarto") == 0 && strcmp(s,"papel") == 0){
      printf("rajesh\n");
    }
    else if (strcmp(r,"pedra") == 0 && strcmp(s,"lagarto") == 0){
      printf("rajesh\n");
    }
    else if (strcmp(r,"spock") == 0 && strcmp(s,"tesoura") == 0){
      printf("rajesh\n");
    }
    else if (strcmp(r,"pedra") == 0 && strcmp(s,"tesoura") == 0){
      printf("rajesh\n");
    }
    else{
      printf("sheldon\n");
    }
  }
  return 0;
}
