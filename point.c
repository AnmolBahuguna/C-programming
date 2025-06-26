#include<stdio.h>
int main(){
int  age=23;
int _age=24;
int *ptr=&age;
int *_ptr=&_age;

printf("address%u\n",ptr);
printf("address%u\n",_ptr);
    return 0;
}