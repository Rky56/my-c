#include<stdio.h>
int main()
{
int a, b, c, d, sum;
printf("enter the number :");
scanf("%d",&a);

b = a/100;
c = (a%100)/10;
d = a%10;
printf("%d",b+c+d);
//printf("%d\n",c);
return 0;
}