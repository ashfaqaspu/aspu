
#include <stdio.h>

#define METERS_TO_CENTS_CONVERSION 40.4686

// Function to calculate land area in cents
double calculate_area_in_cents(double length, double breadth) {
    double area_in_square_meters = length * breadth;
    double area_in_cents = area_in_square_meters / METERS_TO_CENTS_CONVERSION;
    return area_in_cents;
}

int main() {
    double length, breadth, area_in_cents;

    printf("Enter the length of the land (in meters): ");
    scanf("%lf", &length);

    printf("Enter the breadth of the land (in meters): ");
    scanf("%lf", &breadth);

    area_in_cents = calculate_area_in_cents(length, breadth);

    printf("The area of the land is: %.2f cents\n", area_in_cents);

    return 0;
}