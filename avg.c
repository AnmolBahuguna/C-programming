#include<stdio.h>
int main(){
int a,b,c,sum,avg;
printf("enter the number a:");
scanf("%d",&a);

printf("enter the number b:");
scanf("%d",&b);

printf("enter the number c:");
scanf("%d",&c);

sum=a+b+c;
avg=sum/3;

printf("the average of three numbers is: %d\n",avg);
    return 0;
}