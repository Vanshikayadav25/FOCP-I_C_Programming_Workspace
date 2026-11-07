#include<stdio.h>
int main(void){
    //average of three numbers
    int a,b,c;
    printf("Enter a:");
    scanf("%d",& a);
    printf("Enter b :");
    scanf("%d",& b);
    printf("Enter c :");
    scanf("%d",& c);
    printf("average of three number is %d",(a+b+c)/3);
    return 0;
}