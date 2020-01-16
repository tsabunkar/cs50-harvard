#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

int get_positive_integer(char heightInput[]);
void display_increment_pyramid(int n);
bool isNumeric(const char *str);
bool isNumber(char *text);

int main(int argc, char const *argv[])
{
    int height = get_positive_integer("Height: ");
    display_increment_pyramid(height);
    return 0;
}

/**
 * Wait untill positive integer is entered from user
 * @param {string} heightInput String entered by user
 */
int get_positive_integer(char heightInput[])
{
    int positiveInt;
    do
    {
        /* code */
        printf("%s", heightInput);
        scanf("%d", &positiveInt);

        // Keep looping until positive integer is entered
    } while (positiveInt < 1 && isdigit(heightInput) == 1 ? true : false);
    return positiveInt;
}

bool isNumeric(const char *str)
{
    while (*str != '\0')
    {
        if (*str < '0' || *str > '9')
            return false;
        str++;
    }
    return true;
}

bool isNumber(char *text)
{
    int j;
    j = strlen(text);
    while (j--)
    {
        if (text[j] > 47 && text[j] < 58)
            continue;

        return false;
    }
    return true;
}

/**
 * Logic to print Increment pyramid
 * @param {int} n Height of the pyramid
 */
void display_increment_pyramid(int n)
{
    // i: to iterate over rows
    for (int i = 0; i < n; i++)
    {
        // j: to iterate over columns
        for (int j = 1; j <= n; j++)
        {
            if (j < (n - i))
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        // for ever new row, go to next line
        printf("\n");
    }
}
/*
Mario Pseudocode :

- Implement a function which will Wait untill positive integer is entered from user
- Implement a function which will print Increment pyramid.
- In Increment pyramid logic:
  -first for loop is to iterate over row, second for loop is to iterate       over column
  - In Inner for loop if the value less than (height of pyramid -               row_iterator) the print space else print block '#' 
  - After finishing for ever new row, go to next line

*/