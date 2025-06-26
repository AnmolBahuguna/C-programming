#include<stdio.h>
int main(){
    int n1,n2,add,sub,multi,div;
printf("enter the number 1:");
scanf("%d",&n1);

printf("enter the number 2:");
scanf("%d",&n2);

add=n1+n2;
sub=n1-n2;
multi=n1*n2;
div=n1/n2; 

printf("the addition of number is%d\n",add);
printf("the subtraction of number is%d\n",sub);
printf("the multiplcation of number is%d\n",multi);
printf("the division of number is%d\n",div);



return 0;
}