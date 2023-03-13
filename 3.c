#include<stdio.h>

void main() {
 int num,sum;
 printf("Enter integer number: ");
 scanf ("%d", &num);
 sum = 0;
 do {
  sum += num % 10; 
  num /= 10; 
 } while (num > 0);
 printf ("The Sum is = %d \n",sum);
}
