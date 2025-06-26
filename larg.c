#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the Number:");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b && a>c && a>d){
        printf("A is greater:%d\n",a);
    }
    
    else if(b>a && b>c && b>d){
        printf("B is greater:%d\n",b);
    }

    else if(c>a && c>b && c>d){
        printf("C is greater:%d\n",c);
    }

    else if(d>a && d>b && d>c){
        printf("D is greater:%d\n",d);
    }


    return 0;
}