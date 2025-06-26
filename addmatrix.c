#include<stdio.h>
int main(){
int arr1[5][5],arr2[5][5],sum[5][5],i,j,n,row,col;
printf("enter rows and coloumns :");
scanf("%d%d",&row,&col);

printf("enter elements of first array:");
for (i=0; i<row; i++){
    for(j=0;j<col;j++){

    scanf("%d",&arr1[i][j]);
}
}
printf("enter elements of second  array:");
for (i=0; i<row; i++){
    for(j=0;j<col;j++){
    scanf("%d",&arr2[i][j]);
}
}
for (i=0; i<row; i++){
    for(j=0;j<col;j++){
    sum[i][j]=arr1[i][j]+arr2[i][j];   
    
    }
}
printf("sum of  number%d\n:",sum[i]);
for (i=0; i<row; i++){
    for(j=0;j<col;j++){
    printf("%d",sum[i][j]);

}
printf("\n");
}
    return 0;
}