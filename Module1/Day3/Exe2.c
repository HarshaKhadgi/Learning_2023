#include <stdio.h>

void print_bits(unsigned int num) {
    int i;
    unsigned int mask = 1 << 31; // Start with the leftmost bit

    for (i = 0; i < 32; i++) {
        // Check if the current bit is set or not
        if (num & mask) {
            printf("1");
        } else {
            printf("0");
        }

        // Shift the mask to the right by one position
        mask >>= 1;
    }

    printf("\n");
}

int main() {
    unsigned int num;

    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);

    printf("Bits representation: ");
    print_bits(num);

    return 0;
}