#include<stdio.h>
int main(void){

int a, b, temp;

 printf("Enter a:");
 scanf("%d", &a);
 printf("Enter b:");
 scanf("%d",& b);

printf("Before swapping: %d %d\n", a, b);

temp = a;
 a = b;
b = temp;

printf("After swapping: %d %d\n", a, b);

return 0;
} 
    
