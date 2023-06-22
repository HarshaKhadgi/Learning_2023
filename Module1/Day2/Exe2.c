#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    unsigned char *byte_a = (unsigned char *)a;
    unsigned char *byte_b = (unsigned char *)b;
    
    for (size_t i = 0; i < size; i++) {
        unsigned char temp = byte_a[i];
        byte_a[i] = byte_b[i];
        byte_b[i] = temp;
    }
}

int main() {
    int num1 = 5, num2 = 10;
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2, sizeof(int));
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
    
    double pi = 3.14159, e = 2.71828;
    printf("Before swapping: pi = %f, e = %f\n", pi, e);
    swap(&pi, &e, sizeof(double));
    printf("After swapping: pi = %f, e = %f\n", pi, e);
    
    char letter1 = 'A', letter2 = 'B';
    printf("Before swapping: letter1 = %c, letter2 = %c\n", letter1, letter2);
    swap(&letter1, &letter2, sizeof(char));
    printf("After swapping: letter1 = %c, letter2 = %c\n", letter1, letter2);
    
    return 0;
}