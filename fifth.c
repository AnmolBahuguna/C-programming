// WITH ARGUMENT WIOUT RETURN TYPE
#include <stdio.h>
 void fun(int ,int );

void main(){
fun(5,6);
}
void fun(int x,int y){
    int s=0;
    s=x+y;
    printf("sum of numbers =%d",s);
}