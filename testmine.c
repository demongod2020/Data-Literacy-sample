#include <stdio.h>
#include <math.h>

#define MAX_SIZE 100

float calculateMean(int arr[], int size) {
    int sum = 0;
    int i;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}

float calculateVariance(int arr[], int size, float mean) {
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
    int numbers[MAX_SIZE];
    int size, i;

    printf("Please enter the number of digits: ");
    scanf("%d", &size);

    printf("Please enter the number of %d:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    float mean = calculateMean(numbers, size);
    float variance = calculateVariance(numbers, size, mean);
    float stdDeviation = calculateStandardDeviation(variance);

    printf("average: %.2f\n", mean);
    printf("Dispersion: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", stdDeviation);

    return 0;
}
