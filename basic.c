//basic input output of an array

#include<stdio.h>
int main(){
int arr[100],n;
printf("enter size of an array:");
scanf("%d",&n);

printf("enter elemensts of array:");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);

    return 0;
}