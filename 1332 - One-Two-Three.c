#include<stdio.h>

#include<string.h>

int main()

{

    char s[10];

    int t,count;

    scanf("%d",&t);

    while(t--){

            scanf("%s",&s);

        if(strlen(s)==5){

            printf("3\n");

        }

        else{

            count=0;

            if(s[0]=='o')

                count++;

            if(s[1]=='n')

                count++;

            if(s[2]=='e')

                count++;

            if(count>=2)

                printf("1\n");

            else
                printf("2\n");
        }
    }

    return 0;
}

