#include<stdio.h>
int main(){
int i,n,arr[100];
printf("enter number of elements of array:");
scanf("%d",&n);

printf("enter elements of array:");
for (i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
printf("reversed array is:\n");
for (i=n-1; i>=0; i--){
    printf(" %d",arr[i]);
}
return 0;
}