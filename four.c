// NO ARGUMENTS WITH RETURN 

#include<stdio.h>
void add()                  // function declaration 
{
    int a=5,b=4,sum;
    sum= a+b;
    return add;

}
void main(){
   int s;
   s=sum();                  // functiion call
   printf("sum=%d\n",s);

}