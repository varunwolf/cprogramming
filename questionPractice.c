//Take float input and print the fractional part of the real number


#include<stdio.h>
int main(){
    float Float_number = 5.7;
    printf("Enter the number1 :");
    scanf("%f",&Float_number);
    int fractional_number = Float_number;
    float z = Float_number - fractional_number;
    printf("The fractional number is %f",z);
    return 0 ;
}