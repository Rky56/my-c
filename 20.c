#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter the number a ");
scanf("%d",&a);
printf("enter the number b ");
scanf("%d",&b);
printf("enter the number c ");
scanf("%d",&c);
printf("enter the number d ");
scanf("%d",&d);

(a>b && a>c && a>d)?printf("%d is the greater number",a):
(b>a && b>c && b>d)?printf("%d is the greater number",b):
 (c>a && c>b && c>d)? printf("%d is greater number",c):
printf(" %d is the greater number",d);
    
    return 0;
}