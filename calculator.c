
#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: \n");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            printf("Result = %d", num1 + num2);
            break;

        case '-':
            printf("Result = %d", num1 - num2);
            break;

        case '*':
            printf("Result = %d", num1 * num2);
            break;

        case '/':
            if(num2 != 0)
                printf("Result = %d", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.");
            break;

        default:
            printf("Invalid Operator!");
    }

    return 0;
}