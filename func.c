#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_NAME_LENGTH 100

// Function to calculate a simple love score
int calculate_love_score(const char *name1, const char *name2) {
    int score = 0;
    int i;

    // Calculate the sum of ASCII values of characters in both names
    for (i = 0; i < strlen(name1); i++) {
        score += tolower(name1[i]);
    }
    for (i = 0; i < strlen(name2); i++) {
        score += tolower(name2[i]);
    }

    // Calculate a percentage-like score by taking modulo 100
    score = score % 100;

    return score;
}

int main() {
    char name1[MAX_NAME_LENGTH];
    char name2[MAX_NAME_LENGTH];
    int love_score;

    printf("Enter the first name: ");
    fgets(name1, sizeof(name1), stdin);
    name1[strcspn(name1, "\n")] = '\0'; // Remove newline character

    printf("Enter the second name: ");
    fgets(name2, sizeof(name2), stdin);
    name2[strcspn(name2, "\n")] = '\0'; // Remove newline character

    love_score = calculate_love_score(name1, name2);

    printf("The love score between %s and %s is: %d%%\n", name1, name2, love_score);

    return 0;
}

