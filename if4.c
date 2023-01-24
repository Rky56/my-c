#include<stdio.h>

int main()
{
    int a, b, c, d;
    printf("no1\nno2\nno3\nno4\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d \n", a);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("%d  \n", b);
            }
        }
        else
        {
            if (c > d)
            {
                printf("%d  \n", c);
            }
            else
            {
                printf("%d\n", d);
            }
        }
    }

    return 0;
}
