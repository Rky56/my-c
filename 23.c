#include<stdio.h>
void ind();
void fren();

int main() {

printf("enter f for french i for india ");
char ch;
scanf("%c", &ch);
if(ch == 'i')  {
ind(); }
else
{
    fren();
}

    return 0;
}
void ind(){
    printf("Namaste\n");
}
void fren()
{
    printf("Bonjour\n");
}