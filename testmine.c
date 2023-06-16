#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

float calculateMean(float arr[], int size) {
    float sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

float calculateVariance(float arr[], int size, float mean) {
    float variance = 0;
    int i;
    for (i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    return variance / size;
}

float calculateStandardDeviation(float variance) {
    return sqrt(variance);
}

int main() {
    float numbers[MAX_SIZE];
    int size, i;

    printf("Please enter the number of digits: ");
    scanf("%d", &size);

    printf("Please enter %d numbers:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%f", &numbers[i]);
    }

    float mean = calculateMean(numbers, size);
    float variance = calculateVariance(numbers, size, mean);
    float stdDeviation = calculateStandardDeviation(variance);

    printf("Average: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", stdDeviation);

    return 0;
}
