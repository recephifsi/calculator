#include <stdio.h>
#include "calculator.h"

void calculator(void)
{
    float num1, num2, result;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operator (+,-,*,/): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;

    case '-':
        result = num1 - num2;
        break;

    case '*':
        result = num1 * num2;
        break;

    case '/':

        if (num2 != 0)
        {
            result = num1 / num2;
        }

        else
        {
            printf("Error: Division by zero is not allowed.");
            return;
        }

        break;
    default:
        printf("Error: Invalid operator.");
        return;
    }

    printf("Result: %.2f", result);
}
