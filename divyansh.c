#include <stdio.h>

int main() {
    char op;
    double a,b;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch(op) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n",a+b);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n",a-b);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n",a*b);
            break;
        case '/':
            if(num2 != 0.0)
                printf("%.2lf / %.2lf = %.2lf\n",a/b);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
