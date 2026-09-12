#include <stdio.h>
#include <string.h>

int main() 
{
    char name[100];
    printf("Enter your full name");
    fgets(name, sizeof(name), stdin);

    printf("Welcome!\n");
    puts(name);

    return 0;
}
