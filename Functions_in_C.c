#include <stdio.h>

int main()
{
    int a, b, c, d;

    // Take four integer number from the user
    scanf("%d %d %d %d", &a, &b, &c, &d);

    // find which is greatest
    if (a > b && a > c && a > d)
    {
        printf("%d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("%d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("%d", c);
    }
    else
    {
        printf("%d", d);
    }

    return 0;
}