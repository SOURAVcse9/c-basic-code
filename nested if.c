#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("1st position: %d\n", a);

        if (b > c && b > d)
        {
            printf("2nd position: %d\n", b);

            if (c > d)
            {
                printf("3rd position: %d\n", c);
                printf("4th position: %d\n", d);
            }
            else
            {
                printf("3rd position: %d\n", d);
                printf("4th position: %d\n", c);
            }
        }
        else if (c > b && c > d)
        {
            printf("2nd position: %d\n", c);

            if (b > d)
            {
                printf("3rd position: %d\n", b);
                printf("4th position: %d\n", d);
            }
            else
            {
                printf("3rd position: %d\n", d);
                printf("4th position: %d\n", b);
            }
        }
        else
        {
            printf("2nd position: %d\n", d);

            if (b > c)
            {
                printf("3rd position: %d\n", b);
                printf("4th position: %d\n", c);
            }
            else
            {
                printf("3rd position: %d\n", c);
                printf("4th position: %d\n", b);
            }
        }
    }
    else if (b > a && b > c && b > d)
    {
        printf("1st position: %d\n", b);

        if (a > c && a > d)
        {
            printf("2nd position: %d\n", a);

            if (c > d)
            {
                printf("3rd position: %d\n", c);
                printf("4th position: %d\n", d);
            }
            else
            {
                printf("3rd position: %d\n", d);
                printf("4th position: %d\n", c);
            }
        }
        else if (c > a && c > d)
        {
            printf("2nd position: %d\n", c);

            if (a > d)
            {
                printf("3rd position: %d\n", a);
                printf("4th position: %d\n", d);
            }
            else
            {
                printf("3rd position: %d\n", d);
                printf("4th position: %d\n", a);
            }
        }
        else
        {
            printf("2nd position: %d\n", d);

            if (a > c)
            {
                printf("3rd position: %d\n", a);
                printf("4th position: %d\n", c);
            }
            else
            {
                printf("3rd position: %d\n", c);
                printf("4th position: %d\n", a);
            }
        }
    }
    else if (c > a && c > b && c > d)
    {
        printf("1st position: %d\n", c);

        if (a > b && a > d)
        {
            printf("2nd position: %d\n", a);

            if (b > d)
            {
                printf("3rd position: %d\n", b);
                printf("4th position: %d\n", d);
            }
            else
            {
                printf("3rd position: %d\n", d);
                printf("4th position: %d\n", b);
            }
        }
        else if(b>a&&b>d)
        {
            printf("2nd position: %d\n", b);
            if(a>d)
            {
                printf("3rd position: %d\n", a);
                printf("4th position: %d\n", d);
            }
            else
            {
                printf("3rd position: %d\n", d);
                printf("4th position: %d\n", b);
            }
        }
        else//(d>a&&d>b)
        {
            printf("2nd position: %d\n", d);
            if(a>b)
            {
                printf("3rd position: %d\n", a);
                printf("4th position: %d\n", b);
            }
            else
            {
                printf("3rd position: %d\n", b);
                printf("4th position: %d\n", a);
            }
        }
    }
    else//(d>a&&d>b&&d>c)
    {
        printf("1st position: %d\n", d);
        if(a>b&&a>c)
        {
            printf("2nd position: %d\n", a);
            if(b>c)
            {
                printf("3rd position: %d\n", b);
                printf("4th position: %d\n", c);
            }
            else
            {
                printf("3rd position: %d\n", c);
                printf("4th position: %d\n", b);
            }
        }
        else if(b>a&&b>c)
        {
            printf("2nd position: %d\n", b);
            if(a>c)
            {
                printf("3rd position: %d\n", a);
                printf("4th position: %d\n", c);
            }
            else
            {
                printf("3rd position: %d\n", c);
                printf("4th position: %d\n", a);
            }
        }
        else//(c>a&&c>b)
        {
            printf("2nd position: %d\n", c);
            if(a>b)
            {
                printf("3rd position: %d\n", a);
                printf("4th position: %d\n", b);
            }
            else
            {
                printf("3rd position: %d\n", b);
                printf("4th position: %d\n", a);
            }
        }
    }
    getch();
}
