#include<stdio.h>
#include<string.h>
int main()
{
char string[20];
int i,length;
int flag=0;
printf("enter the string");
scanf("%s",string);

length=strlen(string);
for ( i = 0; i < length; i++)
{
    if(string[i]!=string[length-i-1]){
    flag=1;
    break;
    }
}
if(flag)
{
    printf("%s not a palindrome",string);
}

else{
    printf("%s  a palindrome",string);
}

return 0;
}