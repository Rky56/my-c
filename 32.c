#include<stdio.h>
void main()
{
int r,c, s;

for(r=1;r<=5;r++)
{
for(s=r;s<=5;s++)
printf("");
for(c=1;c<=r;c++)
printf("*");

for(c=c-2;c>=1;c--)
printf("*");

printf("\n");
}
 return 0;
}



 
