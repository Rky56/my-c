#include<stdio.h>
int main()
{
int marks, index;
printf("enter the marks : ");
scanf("%d",&marks);
index=marks/10;
switch (index)
{
case 10 :
case 9 : 
printf("O grade");
    break;
case 8 : 
printf("E grade");
    break;
    case 7 : 
printf("A grade");
    break;
    case 6 : 
printf("B grade");
    break;
    case 5 : 
printf("C grade");
    break;
    case 4 : 
printf("D grade");
    break;
    case 3 : 
printf("F grade");
    break;
}
return 0;
}