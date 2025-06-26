#include<stdio.h>
int main(){
int arr[100],i,pos=0,neg=0,n;
printf("enter number of elements of array:");
scanf("%d",&n);

printf("enter elements of array:");
for (i=0; i<n; i++){
    scanf("%d",&arr[i]);
}

for (i=0; i<n; i++){
   if(arr[i]>=0){
    pos++;
   }
   else{
    neg++;
   }
}
printf("positive number%d\n:",pos);
printf("negative number%d\n:",neg);
    return 0;
}