#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the number a ");
scanf("%d",&a);
printf("enter the number b ");
scanf("%d",&b);
printf("enter the number c ");
scanf("%d",&c);
(a>b && a>c)?printf("%d is the greater number",a):b>a && b>c ?printf("%d is greater number",b):
printf(" %d is the greater number",c);
    
    return 0;
}