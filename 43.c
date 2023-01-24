#include<stdio.h>
int main()
{
int r , n , temp, sum=0;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{
    r=n%10;
    sum=(sum*10)+r;
n=n/10;
}
printf("reverse number is %d",sum);
return 0;
}