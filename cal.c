#include<stdio.h>
int main(){
int a,b,add,sub,multi,div;
char operator;
printf("enter the number a:");
scanf("%d",&a);

printf("enter the number b:");
scanf("%d",&b);

printf("enter the operator(+,-,*,/):");
scanf("%c",&operator);

switch(operator){

case'+':
add=a+b;
printf("ADDITION OF NUMBER IS=%d\n",add);
break;

case'-':
sub=a-b;
printf("SUBTRACTION OF NUMBER IS=%d\n",sub);
break;

case'*':
multi=a*b;
printf("MULTIPLICATION OF NUMBER IS=%d\n",multi);
break;

case'/':
add=a/b;
printf("DIVISION OF NUMBER IS=%d\n",div);
break;

default:
printf("INVALID OPERATOR!=%d\n");

}
   return 0;
}

