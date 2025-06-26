#include<stdio.h>
int main(){
int arr[100],i,even=0,odd=0,n;
printf("enter the number of elements in array:");
scanf("%d",&n);

for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
   for(i=0;i<n;i++){
    if(arr[i]%2==0){
        printf("even elements%d\n",arr[i]);
        even++;
    }
    else{
       printf("odd elements%d\n",arr[i]);
       odd++;
    }
   }
   printf("even elements are:%d\n",even);
   printf("even elements are:%d\n",odd);
    return 0;
}