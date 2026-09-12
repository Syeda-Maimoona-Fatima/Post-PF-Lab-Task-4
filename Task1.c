#include <stdio.h>

int main() 
{
    float Marks, Familyincome;
    printf("Enter your Marks percentage");
    scanf("%f", &Marks);
    printf("Enter your Family Income");
    scanf("%f", &Familyincome);
    if (Marks >= 80 || Familyincome < 50000)
        printf("Qualifies for Scholarship");
    else
        printf("Does Not qualify for Scholarship");

    return 0;
    
}
