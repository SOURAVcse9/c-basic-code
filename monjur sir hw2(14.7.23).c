
#include <stdio.h>
int main(void)
{
 char s[80], *str;
 int space;
 printf("Enter a string: ");
 gets(s);
 str = s;
 for(space=0; *str; str++) {
 if(*str != ' ') continue;
 space++;
 }
 printf("%d spaces\n", space);
 return 0;
}
