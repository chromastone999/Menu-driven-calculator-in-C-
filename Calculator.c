// Writing code in C for basic calculation (CALCULATOR).

#include <stdio.h>
#include <math.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int modulus(int a, int b) {
    if (b == 0) {
        printf("Error: Modulus by zero!\n");
        return 0;
    }
    return a % b;
}

double power(double base, double exp) {
    return pow(base, exp);
}

int main() {
    int choice;
    double num1, num2;

    while (1) {
        printf("...CALCULATOR...\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Power\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting...\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);

        switch (choice) {
            case 1:
                printf("Result: %.5lf\n", add(num1, num2));
                break;
            case 2:
                printf("Result: %.5lf\n", subtract(num1, num2));
                break;
            case 3:
                printf("Result: %.5lf\n", multiply(num1, num2));
                break;
            case 4:
                printf("Result: %.5lf\n", divide(num1, num2));
                break;
            case 5:
                printf("Result: %d\n", modulus((int)num1, (int)num2));
                break;
            case 6:
                printf("Result: %.5lf\n", power(num1, num2));
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}