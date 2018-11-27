#include <stdio.h>
int main(void){
 int n, a, sum;
 a = 10;
 sum = 0;
 printf("Write a number more than 20>>\n");
 scanf("%d", &n);
 if (n<20){
    printf("Your number is less than 20!");
 }
 while (n>20){
    a = a + 1;
    sum = a + sum;

if (a == n-1){
        printf("%d",sum);
    break;
}
 }
return 0;
}
