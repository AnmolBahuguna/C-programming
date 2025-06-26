// WITH ARGUMENT WITH RETURN TYPE
#include <stdio.h>
int sum(int ,int); 

void main(){
int x,y,c;
printf("enter x&y");
scanf("%d%d",&x,&y);
c=sum(x,y);
printf("sum is=%d\n",c);
}
int sum(int a,int b){

    return a+b;
}