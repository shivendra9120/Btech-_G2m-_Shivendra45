#include <stdio.h>

int main() {
    float marks[5], sum = 0, percentage;
    int i;

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    // Calculate percentage
    percentage = (sum / 500) * 100;   // Assuming each subject is out of 100

    // Display results
    printf("\nTotal Marks = %.2f", sum);
    printf("\nPercentage = %.2f%%", percentage);

    return 0;
}