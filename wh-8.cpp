// no.9 - Name Techit Chomchoy - Lab 711
#include <stdio.h>
int main()
{
    char name[50];
    int money,count;
    printf("Input your name = ");
    scanf("%s",name);
    printf("Input money = ");
    scanf("%d",&money);
    printf("---------------\n");

    count = money/1000;
    money = money%1000;
    printf("1000B=%d\n",count);

    count = money/500;
    money = money%500;
    printf("500B=%d\n",count);

    count = money/100;
    money = money%100;
    printf("100B=%d\n",count);

    count = money/50;
    money = money%50;
    printf("50B=%d\n",count);

    count = money/20;
    money = money%20;
    printf("20B=%d\n",count);

    count = money/10;
    money = money%10;
    printf("10B=%d\n",count);

    count = money/5;
    money = money%5;
    printf("5B=%d\n",count);

    count = money/2;
    money = money%2;
    printf("2B=%d\n",count);

    count = money/1;
    money = money%1;
    printf("1B=%d\n",count);
    return 0;
}
