#include<stdio.h>
int main(){
int arr[100],i,sum;
printf("enter the elements of array:");
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
}
printf("the sum of elements are:%d\n",sum);

    return 0;
}