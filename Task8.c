#include <stdio.h>

int main ()
{
    float marks;
    printf("Enter your Marks");
    scanf("%f", &marks);

    if (marks>=50)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}
