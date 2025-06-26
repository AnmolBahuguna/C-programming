#include<stdio.h>
int main(){
int max,min,i,arr[100],n;
printf("enter number of elements in array:");
scanf("%d",&n);

printf("enter elements in array:");
      for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
      }
max=min=arr[0];
      for(i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
        }
printf("maximum elements are:%d\n",max);
printf("minimum elements are:%d\n",min);
    return 0;
}