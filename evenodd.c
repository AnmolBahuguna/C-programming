
#include<stdio.h>
int main(){
int arr[100],n,sum=0,i,even=0,odd=0;
printf("enter size of an array:");
scanf("%d",&n);

printf("enter elemensts of array:");
for( i=0;i<n;i++){
      scanf("%d",&arr[i]);
    if (arr[i]%2==0){
        even++;
    }
    else
    odd++;

}
printf("even array=%d\n",even);
printf("odd array=%d\n",odd);
    return 0;
}