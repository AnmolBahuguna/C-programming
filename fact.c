#include <stdio.h>
void fact(){
    int fact=1,i,n;
    printf("enter the number :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    fact*=i;
    printf("factorial=%d\n",fact);
}
int main(){


fact();

    return 0;
}