#include <stdio.h>
#include <stdbool.h>

int get_int(char str[]);
bool checkIfEvenOdd(int n);

int main(int argc, char const *argv[])
{
    int n = get_int("Enter a number\n");
    bool isEven = checkIfEvenOdd(n);
    printf("Number entered is ");
    isEven == true ? printf("Even") : printf("Odd");
    printf("\n");
    return 0;
}

bool checkIfEvenOdd(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int get_int(char str[])
{
    int out;
    printf("%s", str);
    scanf("%d", &out);
    return out;
}