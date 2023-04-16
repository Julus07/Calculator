#include <stdio.h>

int operation;
void chooseOperation()
{
    printf("[1] Addition | [2] Subtraktion | [3] Multiplikation | [4] Division | [5] Modulo\n");
    printf("Choose an operation >> ");
    scanf("%d", &operation);
    if (operation < 1 || operation > 5)
    {
        printf("Invalid Operation\n");
        exit(0);
    }
}

float inputNumber()
{
    float input;
    printf("Input number >> ");
    scanf("%f", &input);
    return input;
}

float berechnung(float zahl1, float zahl2)
{
    switch (operation)
    {
    case 1:
        return (zahl1 + zahl2);
        break;
    case 2:
        return (zahl1 - zahl2);
        break;
    case 3:
        return (zahl1 * zahl2);
        break;
    case 4:
        return (zahl1 / zahl2);
        break;
    case 5:
        return ((int)zahl1 % (int)zahl2);
        break;
    }
}

int main()
{
    chooseOperation();
    printf("Das Ergebnis ist: %.1f", berechnung(inputNumber(), inputNumber()));
    return 0;
}