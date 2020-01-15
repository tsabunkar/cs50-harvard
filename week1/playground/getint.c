#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age;
    printf("whats your age ? \n");
    scanf("%d", &age);
    printf("Number of days you have born : %d \n", age * 365);
    return 0;
}
