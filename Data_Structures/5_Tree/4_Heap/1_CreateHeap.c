#include <stdio.h>

// Function to insert an element into the heap
void insertHeap(int a[], int n) {
    int temp, i = n;
    temp = a[i];
    
    // Heapify up
    while (i > 0 && temp > a[(i - 1) / 2]) {
        a[i] = a[(i - 1) / 2];  // Move parent down
        i = (i - 1) / 2;        // Move to the parent's index
    }
    a[i] = temp;
}

int main() {
    int a[] = {10, 20, 30, 25, 5, 40, 35};
    int size = sizeof(a) / sizeof(a[0]);
    
    // Create the heap
    for (int i = 1; i < size; i++) {
        insertHeap(a, i);
    }
    
    // Print the heap
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
