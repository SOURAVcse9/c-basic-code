#include <stdio.h>
 #include<math.h>
int main()
{
 char name;

 double ms,ps,ns;//monthly salary=ms;product sold=ps;net salary=ns
 scanf("%ch%lf%lf\n",&name,&ms,&ps);
 ns=((ps*0.15)+ms);
 printf("TOTAL = R$ %.2lf\n",ns);

    return 0;
}
