#include<stdio.h>
void number(float n);

int main()
{
float n;
printf("enter the number");
scanf("%f",&n);
number(n);
printf("%f actual number\n",n);

    return 0;
}
void number(float n){
 n= n*n;
 printf("square of number %f\n",n);

}

    
