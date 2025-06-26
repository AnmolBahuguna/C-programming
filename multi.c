#include<stdio.h>
int main(){
int arr1[100],arr2[100],arr3[100],i;
printf("Enter First Array :");
for(i=0;i<5;i++){
    scanf("%d",&arr1[i]);
}

printf("Enter Second Array :");
for(i=0;i<5;i++){
    scanf("%d",&arr2[i]);
}

for(i=0;i<5;i++){
    arr3[i]=arr1[i]*arr2[i];
}
printf("Multiplication  Of Both Array Is");
    for(i=0;i<5;i++){
    printf("%d",arr3[i]);
    printf("\n");
    }
    return 0;
}