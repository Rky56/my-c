#include<stdio.h>
int main()
{
    int year;
    printf("enter the year :");
    scanf("%d", &year);
  
    if(year%400 ==0)
    
    {
        printf("%d IS A LEAP YEAR\n");
    }
else{
    
    printf("%d IS NOT A LEAP YAER\n");

}
return 0;

}