#include <stdio.h>
int main()
{
   int marks, acc, bst, eco, totalm, avg;
   printf("enter the marks of accounts:");
   scanf("%d", &acc);

   printf("enter the marks of business studies:");
   scanf("%d", &bst);

   printf("enter the marks of economics:");
   scanf("%d", &eco);

   totalm = acc + bst + eco;
   avg = totalm / 3;

   if (avg > 75)
   {
      printf("good marks\n");
   }
   else if (avg > 50)
      printf("average marks\n");
   else if (avg > 40)
      printf("fail\n");

   printf("the average marks is=%d", avg);
   return 0;
}