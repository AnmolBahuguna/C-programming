#include<stdio.h>
int main(){
int arr1[100],i,j,n;

printf("enter size of array");
scanf("%d",&n);

printf("Enter Elements Of Array :");
for(i=0;i<n;i++){
    scanf("%d",&arr1[i]);
}
printf("common elements in array");
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
    if(arr1[i]==arr1[j]){
        printf("%d",arr1[i]);
        printf("\n");
        break;
    }
  }
}
    return 0;
}