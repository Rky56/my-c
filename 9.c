#include<stdio.h>
int main()
{
int a, b, c, d, e ,sum;
printf("enter the number :");
scanf("%d",&a);

b = a/1000;
c = (a%1000)/100;
d = ((a%1000)%100)/10;
e = a%10;
printf("%d",b+c+d+e);
//printf("%d\n",c);
return 0;
}