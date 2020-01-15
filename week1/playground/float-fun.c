#include <stdio.h>

// Must Declare function protoype
float get_float(char inputStr[]);
float calculateGST(float price);

int main(int argc, char const *argv[])
{

    float amount = get_float("What's the price");
    printf("your total (Including GST) is : %f\n", calculateGST(amount));
    return 0;
}

// Implementing the declare function
float calculateGST(float price)
{
    return price + ((price * 18) / 100);
}

float get_float(char inputStr[])
{
    float out;
    printf("%s\n", inputStr);
    scanf("%f", &out);
    return out;
}
