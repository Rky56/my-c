#include<stdio.h>
void sum();
void sub();
int a=4, b=6;
void sum(){
    printf("sum is %d\n",a+b);
    printf("sub is %d\n",a-b);
}
/*void sub(){
    printf("sub is %d\n" ,a-b);


}*/ 
int main()
{
int a,b;
sum();
sum();
return 0;
}
