#include<stdio.h>
int main(){
int m,n, sum=0, i ,j;
int a[10][10], b[10][10], result[10][10];
//system("cls");
printf("enter number of row");
scanf("%d",&m);
printf("enter number of column");
scanf("%d",&n);
printf("enter the the first matrix\n");
for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        printf("enter the %d %d element of your first matrix\n",i+1,j+1);
scanf("%d",&a[i][j]);
    }
}
    printf("enter the the second matrix\n");
    for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        printf("enter the %d %d element of your second matrix\n",i+1,j+1);
scanf("%d",&b[i][j]);
    }

}
for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        for(int k=0; k<n;k++){
sum += a[i][k]*b[k][j];
        }
        result[i][j]=sum;
        sum= 0;

    }
       }
       for(i=0; i<m; i++){
    for(j=0; j<n; j++){
printf("%d\t",result[i][j]);


    }
    printf("\n");
        }
         
return 0;
}