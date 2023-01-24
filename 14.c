#include<stdio.h>
int main(){
int m,n, sum=0, i ,j;
int a[3][4], b[3][2], result[3][2];
printf("enter the the first matrix\n");
for(i=0; i<3; i++){
    for(j=0; j<4; j++){
        printf("enter the %d %d element of your first matrix\n",i,j);
scanf("%d",&a[i][j]);
    }
}
    printf("enter the the second matrix\n");
    for(i=0; i<4; i++){
    for(j=0; j<2; j++){
        printf("enter the %d %d element of your second matrix\n",i,j);
scanf("%d",&b[i][j]);
    }

}
for(i=0; i<3; i++){
    for(j=0; j<2; j++){
        for(int k=0; k<4;k++){
sum += a[i][k]*b[k][j];
        }
        result[i][j]=sum;
        sum= 0;

    }
       }
       for(i=0; i<3; i++){
    for(j=0; j<2; j++){
printf("%d\t",result[i][j]);


    }
    printf("\n");
        }
         
return 0;
}