#include <stdio.h>

// Function to swap two elements
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to heapify a subtree with root at index i in array of size n
void heapify(int a[], int n, int i) {
    int largest = i; // Initialize largest as root
    int left = 2 * i + 1; // Left child
    int right = 2 * i + 2; // Right child

    // If left child is larger than root
    if (left < n && a[left] > a[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && a[right] > a[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(&a[i], &a[largest]);

        // Recursively heapify the affected subtree
        heapify(a, n, largest);
    }
}

// Function to sort an array using heap sort
void heapSort(int a[], int n) {
    // Build a max-heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);

    // One by one extract elements from the heap
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(&a[0], &a[i]);

        // Call heapify on the reduced heap
        heapify(a, i, 0);
    }
}

int main() {
    int a[] = {10, 20, 30, 25, 5, 40, 35};
    int size = sizeof(a) / sizeof(a[0]);
    
    // Perform heap sort
    heapSort(a, size);
    
    // Print sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}