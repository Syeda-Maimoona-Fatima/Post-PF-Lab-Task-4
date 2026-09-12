#include <stdio.h>

int main() 
{
    float number1, number2, number3, average;
    printf("Enter Number 1:");
    scanf("%f", &number1);
    printf("Enter Number 2:");
    scanf("%f", &number2);
    printf("Enter Number 3:");
    scanf("%f", &number3);

    average = (number1 + number2 + number3) / 3;
    printf("Average = %f", average);

    return 0;
}
