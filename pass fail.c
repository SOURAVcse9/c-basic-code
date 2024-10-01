#include<stdio.h>
int main()
{
    int m;
    printf("Enter your mark:");
    scanf("%d",&m);
    if(m>100||m<0)
        printf("This mark is invalid");

    else if(m>=80&&m<=100)

        printf("You'r get- A+");
    else if(m>=70&&m<=79)
        printf("You'r get- A");
    else if(m>=60&&m<=59)
        printf("You'r get- A-");
    else if(m>=50&&m<=59)
        printf("You'r get- B");
    else if(m>=40&&m<=49)
        printf("You'r get- C");
    else if(m>=33&&m<=39)
        printf("You'r get Pass");
    else
        printf("you are- F");
    getch();

}
