#include<stdio.h>
int main(){
    int num1,num2,num3;

printf("enter the three numbers :");
scanf("%d%d%d",&num1,&num2,&num3);
if (num1>num2 && num1>num3)
    printf("num 1 is greater:\n",num1);
else if(num2>num1 && num2>num3) 
    printf("num 2 is greater:\n",num2);
    
 else
     printf("num3 is greater:\n",num3);   
    return 0;
}