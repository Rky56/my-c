#include<stdio.h>
int main()
{
    int a,b,c;
printf("enter the three no.");
scanf("%d%d%d",&a,&b,&c);
int largest = a>b?(a>c?a:c):(b>c?b:c);
printf("\n the largest number is %d",largest);


}