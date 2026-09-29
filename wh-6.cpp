// no.9 - Name Techit Chomchoy - Lab 711 //
#include <stdio.h>
#include <conio.h>
int main()
{
    int count=1,fact;
    long int sum=1;
    printf("Plaese enter number of factorial = ");
    scanf("%d",&fact);
    while(count <= fact){
        sum = sum * count;
        count = count + 1;
    }
    printf("Result of %d! is %ld\n",fact,sum);
    printf("\n------------");
}