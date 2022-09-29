// Condisions deciding
// if else  //switch case ;

#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int descsion;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);
    printf("Enter Your descsion according to NUmber  For sub 1 /for add 2 /for multiplication 3 /for division 4 : ");
    scanf("%d", &descsion);

    switch (descsion)
    {
    case 1:
        printf("Substraction : %d", num1 - num2);

        break;
    case 2:
        printf("Addion : %d", num1 + num2);
        break;
    case 3:
        printf("Multipication is: %d", num1 * num2);
        break;
    case 4:
        printf("Division : %f", num1 / num2);
        break;

    default:
        printf("Plz Enter Valid Opration");
        break;
    }

    return 0;
}