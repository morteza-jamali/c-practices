#include <stdio.h>

int main()
{
    int inputNumber1;
    int inputNumber2;
    int inputNumber3;

    printf("Please enter a number:\n");
    scanf("%d", &inputNumber1);
    printf("Input number is => %d\n", inputNumber1);


    printf("Now, enter two numbers:\n");
    scanf("%d%d", &inputNumber2, &inputNumber3);
    printf("Input numbers are => %d and %d\n", inputNumber2, inputNumber3);

    return 0;
}
