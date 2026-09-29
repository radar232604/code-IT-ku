// no.9 - Name Techit Chomchoy - Lab 711 //
#include <stdio.h>
int main()
{
    int num1, num2, add, sub, mul, di, mod;
    printf("Input num1 : ");
    scanf("%d",&num1);
    printf("Input num2 : ");
    scanf("%d",&num2);
    
    printf("------------Output------------\n");
    printf("Value of num1 = %d\n",num1);
    printf("Value of num2 = %d\n",num2);
        add = num1 + num2;
    printf("Addition = %d\n",add);
        sub = num1 - num2;
    printf("Subraction = %d\n",sub);
        mul = num1 * num2;
    printf("Multiplication = %d\n",mul);
        di = num1 / num2;
    printf("Division = %d\n",di);
        mod = num1 % num2;
    printf("Modulo = %d\n",mod);
    printf("------------End------------\n");
}