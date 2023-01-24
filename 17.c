#include<stdio.h>
int main()
{
int a,b;
printf("enter the number a ");
scanf("%d",&a);
printf("enter the number b ");
scanf("%d",&b);
a>b?printf("%d is the greater number",a):a==b?printf("%d and %d  both are equal number",a ,b):printf(" %d is the greater number",b);
    return 0;
}