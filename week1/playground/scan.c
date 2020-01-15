#include <stdio.h>

int main(int argc, char const *argv[])
{
    char answer[50];
    // Input from the user
    printf("What is your name ?");
    scanf("%s", answer);

    // Output to the user
    printf("hello, %s", answer); // %s -> dynamic value for Placeholder whose datatype is string
    return 0;
}
