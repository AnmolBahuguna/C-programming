#include<stdio.h>
int main(){
int arr[100],avg,sum,i;
printf("enter the elements of array:");
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    avg=sum/5;
}

printf("sum of elements %d\n",sum);
printf("avg of elements %d\n",avg);
    return 0;
}