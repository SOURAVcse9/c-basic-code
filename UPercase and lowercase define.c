#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);
    if(ch>='a'&&ch<='z')
    {
        printf("%c is lower character\n",ch);

    }
    else if(ch>='A'&&ch<='Z')
    {
        printf("%c is a upper character\n",ch);

    }
   else
  {
        printf("%c is other charecter",ch);
    }
    return 0;
}
