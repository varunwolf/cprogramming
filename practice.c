//Q1.take two integer input a and b : a>b and find the remainder when a is divided by b
// a is dividend , b is divisor q is quotient[remainder = dividend - divisor*quotient];a/b means a is divided by b (a will be in middle)


#include<stdio.h>
int main(){
    int a , b;                           // a > b
    printf("Enter the dividend :");
    printf("Enter the divisor :");
    scanf("%d %d",&a ,&b);
    int quotient = a/b;
    int reminder = a - (b * quotient);   //dividend = divisor * quotient + reminder
    printf("The remindder when %d is divided by %d is : %d", a,b,reminder);
    return 0 ;
}
                

