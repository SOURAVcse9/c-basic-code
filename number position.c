//its a wrong sorcs code, please write the correct code
#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Please enter 4 number: ");
    scanf("%d %d %d %d",&a,&b,&c);
    if(a>b&&a>c&&a>d)
    {
        printf("%d is a 1st position number",a);
        if(b>c&&b>d)
        {
            printf("%d is a 2nd position number",b);
            if(c>d)
                printf("%d is 3rd position number",c);
            else
                printf("%d is 4th position number",d);
        }
        else if(c>b&&c>d)
        {
            printf("%d is a 2nd position number",c);
            if(b>c)
                printf("%d is 3rd position number",b);
            else
                printf("%d is 4th position number",d);
        }
        else//(d>b&&d>c)
        {
            printf("%d is 2nd position number",d);
            if(b>d)
                printf("%d is 3rd position number",b);
            else
                printf("%d is 4fh position number",c);
        }
    }
    else if(b>a&&b>c&&b>d)
    {
        printf("%d is a 1st position number",b);
        if(a>c&&a>d)
        {
            printf("%d is a 2nd position number",a);
            if(c>d)
                printf("%d is 3rd position number",c);
            else
                printf("%d is 4th position number",d);
        }
        else if(c>a&&c>d)
        {
            printf("%d is 2nd position number",c);
            if(a>c)
                printf("%d is a 3rd position number",a);
            else
                printf("%d is 4th position number",d);
        }
        else//(d>a&&d>c)
        {
            printf("%d is 2nd position number",d);
            if(a>d)
                printf("%d is a 3rd position number",a);
            else
                printf("%d is 4th position number",c);
        }
    }
    else if(c>a&&c>b&&c>d)
    {
        printf("%d is a 1st position number",c);

        if(a>b&&a>d)
        {
            printf("%d is a 2nd position number",a);
            if(b>a)
                printf("%d is a 3rd position number",b);
            else
                printf("%d is 4th position number",d);
        }
        else if(b>a&&b>d)
        {
            printf("%d is a 2nd position number",b);
            if(a>b)
                printf("%d is a 3rd position number",a);
            else
                printf("%d is 4th position number",d);
        }
        else//(d>a&&d>b)
        {
            printf("%d is a 2nd position number",d);
            if(a>d)
                printf("%d is a 3rd position number",a);
            else
                printf("%d is 4th position number",b);
        }
    }
    else//(d>a&&d>b&&d>c)
    {
        printf("%d is 1st position number",d);
        if(a>b&&a>c)
        {
            printf("%d is a 2nd position number",a);
            if(b>a)
                printf("%d is a 3rd position number",b);
            else
                printf("%d is 4th position number",c);
        }
        else if(b>a&&b>c)
        {
            printf("%d is a 2nd position number",b);
            if(a>b)
                printf("%d is a 3rd position number",a);
            else
                printf("%d is 4th position number",c);
        }
        else//(c>a&&c>d)
        {
            printf("%d is a 2nd position number",c);
            if(a>c)
                printf("%d is a 3rd position number",a);
            else
                printf("%d is 4th position number",b);
        }
    }
    getch();
}
