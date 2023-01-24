#include<stdio.h>
int main()
{
int n;
printf("enter number :");
scanf("%d" ,&n);
for(int i=-n; i<=n; i = i+1)
{
printf("%d\n" ,i);

}

return 0;

}