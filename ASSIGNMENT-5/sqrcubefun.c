#include<stdio.h>

void main()
{
    int m, cube(), sqr(), input();

    printf("Cube: %d\n", cube(sqr(input())));
}

int input()
{
    int k;
    printf("Number: ");
    scanf("%d", &k);

    return k;
}

int sqr(int m)
{
    printf("Square: %d\n",m*m);
    return m;
}

int cube(int m)
{
    return m*m*m;
}
 
 
/*Number: 5
Square: 25
Cube: 125*\

