// no.9 - Name Techit Chomchoy - Lab 711 //
#include <stdio.h>
int main()
{
    int p1, p2;
    printf("Player 1 Enter your number = ");
    scanf("%d", &p1);

    do {
        printf("Player 2 Enter your number = ");
        scanf("%d", &p2);

        if (p2 > p1) {
            printf("Smaller than...Try again\n");
        }   else if (p2 < p1) {
            printf("greater than...Try again\n");   
        }   else {
            printf("Congratulationd!\n");
        }
    } while (p2 != p1);

    return 0;
}