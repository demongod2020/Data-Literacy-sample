#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Please enter the number of digits: ");
    scanf("%d", &n);

    int numbers[n];

    printf("%d Enter  numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / n;

    printf("average: %.2f\n", average);

    return 0;
}


