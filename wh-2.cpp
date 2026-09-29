// no.9 - Name Techit Chomchoy - Lab 711 //
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter n Round = ");
    scanf("%d", &n);

    while (i <= n) {

        int b, h;
        float area;
        printf("\n------------Picture%d------------\n", i);
        printf("Base%d = ", i);
        scanf("%d", &b);
        printf("Height%d = ", i);
        scanf("%d", &h);
        area = 0.5 * b * h;
        printf("Area%d = %.2f\n", i, area);
        i = i + 1;
    }
    return 0;
}