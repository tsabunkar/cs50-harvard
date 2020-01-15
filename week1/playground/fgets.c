#include <stdio.h>

int main(int argc, char const *argv[])
{
    char answer[20];
    printf("Whats your name ? \n");
    fgets(answer, 20, stdin);
    printf("Hello, %s", answer);
    return 0;
}
