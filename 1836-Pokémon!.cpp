#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,bs,iv,ev,hp,at,df,sp,i;
    char n[25];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%s %d", &n, &l);
        scanf("%d %d %d", &bs, &iv, &ev);
        hp=(((iv + bs +sqrt(ev)/8 +50)*l)/50)+10 ;
    	scanf("%d %d %d", &bs, &iv, &ev);
    	at=(((iv + bs +sqrt(ev)/8)*l)/50)+5;
	    scanf("%d %d %d", &bs, &iv, &ev);
        df=(((iv + bs +sqrt(ev)/8)*l)/50)+5;
     	scanf("%d %d %d", &bs, &iv, &ev);
        sp=(((iv + bs +sqrt(ev)/8)*l)/50)+5;
        printf("Caso #%d: %s nivel %d\n",i,n,l);
        printf("HP: %d\n",hp);
        printf("AT: %d\n",at);
        printf("DF: %d\n",df);
        printf("SP: %d\n",sp);
  }
    return 0 ;
}
