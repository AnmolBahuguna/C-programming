#include<stdio.h>
int main(){
    int m,a,rate=5,bill,tf;
printf("enter the number of mangoes :");
scanf("%d",&m);

printf("enter the number of apples :");
scanf("%d",&a);

tf= m+a ;
bill=tf *rate;

if (tf>10){
    bill=bill*0.9;
}

else if (tf>5){
    bill=bill*0.95;
}

    printf("the total bill is=%d\n",bill);
    return 0;
}