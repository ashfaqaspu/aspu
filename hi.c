#include <stdio.h>

// Function prototypes
void calculateSum(double a, double b);
void calculateDifference(double a, double b);
void calculateProduct(double a, double b);
void calculateQuotient(double a, double b);

int main() {
    double num1, num2;

    // Ask user to input the first number
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    // Ask user to input the second number
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Call functions to perform calculations
    calculateSum(num1, num2);
    calculateDifference(num1, num2);
    calculateProduct(num1, num2);
    calculateQuotient(num1, num2);

    return 0;
}

// Function to calculate and print the sum
void calculateSum(double a, double b) {
    double sum = a + b;
    printf("Sum: %.2f\n", sum);
}

// Function to calculate and print the difference
void calculateDifference(double a, double b) {
    double difference = a - b;
    printf("Difference: %.2f\n", difference);
}

// Function to calculate and print the product
void calculateProduct(double a, double b) {
    double product = a * b;
    printf("Product: %.2f\n", product);
}

// Function to calculate and print the quotient
void calculateQuotient(double a, double b) {
    if (b != 0) {
        double quotient = a / b;
        printf("Quotient: %.2f\n", quotient);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
