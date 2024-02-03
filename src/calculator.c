#include <stdio.h>
#include <windows.h>

int chooseOperation()
{
    int operation;
    do
    {
        printf("\x1B[2J\x1B[H");
        printf("[1] Addition | [2] Subtraktion | [3] Multiplikation | [4] Division | [5] Modulo\n");
        printf("Choose an operation » ");
        scanf("%d", &operation);
        if (operation < 1 || operation > 5)
        {
            printf("Invalid operation! Try again.\n");
            Sleep(1000);
        }
    } while (operation < 1 || operation > 5);
}

double inputNumber()
{
    double input;
    printf("Input number » ");
    scanf("%lf", &input);
    return input;
}

double result(int operation, double num1, double num2)
{
    switch (operation)
    {
    case 1:
        return (num2 + num1);
        break;
    case 2:
        return (num2 - num1);
        break;
    case 3:
        return (num2 * num1);
        break;
    case 4:
        return (num2 / num1);
        break;
    case 5:
        return ((int)num2 % (int)num1);
        break;
    }
}

int main()
{
    int operation = chooseOperation();
    printf("The rusult is: %.1lf", result(operation, inputNumber(), inputNumber()));

    return 0;
}