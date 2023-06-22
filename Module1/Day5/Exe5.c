#include <stdio.h>

// Define a structure
struct Point {
    int x;
    int y;
};

// Function to swap the fields of two structures using pointers
void swapFields(struct Point* ptr1, struct Point* ptr2) {
    int temp = ptr1->x;
    ptr1->x = ptr2->x;
    ptr2->x = temp;
    
    temp = ptr1->y;
    ptr1->y = ptr2->y;
    ptr2->y = temp;
}

int main() {
    // Create two structures
    struct Point p1 = {1, 2};
    struct Point p2 = {3, 4};

    printf("Before swapping:\n");
    printf("p1: x = %d, y = %d\n", p1.x, p1.y);
    printf("p2: x = %d, y = %d\n", p2.x, p2.y);
    
    // Swap the fields using pointers
    swapFields(&p1, &p2);
    
    printf("After swapping:\n");
    printf("p1: x = %d, y = %d\n", p1.x, p1.y);
    printf("p2: x = %d, y = %d\n", p2.x, p2.y);

    return 0;
}