#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallestDigit = 10;  // Initialize smallestDigit to a value greater than any digit (0-9)
    int largestDigit = -1;   // Initialize largestDigit to a value smaller than any digit (0-9)

    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;

            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            temp /= 10;
        }
    }

    if (smallestDigit == 10 || largestDigit == -1) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    int n = 3;
    int numbers[] = {8, 156, 123450};

    findSmallestLargestDigits(n, numbers);

    return 0;
}