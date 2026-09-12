#include <stdio.h>

int main()
{
    
    float length, width, area, perimeter;
    printf("Enter Length\n");
    scanf("%f", &length);
    printf("Enter Width\n");
    scanf("%f", &width);
    area= length * width;
    perimeter= 2 * (length + width);

    printf("Area= %f\n", area);
    printf("Perimeter=%f", perimeter);
    
    return 0;
}
