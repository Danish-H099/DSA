#include <stdio.h>

// Function to delete the root from the heap
void deleteHeap(int a[], int *n) {
    int i, j, temp;
    int lastElement = a[*n - 1]; // Take the last element
    a[0] = lastElement;          // Move it to the root
    (*n)--;                      // Reduce the heap size
    
    i = 0;                       // Start at the root
    j = 2 * i + 1;               // Left child index
    
    while (j < *n) {
        // Find the larger child
        if (j + 1 < *n && a[j] < a[j + 1]) {
            j++;
        }
        
        // If lastElement is greater than the larger child, we're done
        if (lastElement >= a[j]) {
            break;
        }
        
        // Move the larger child up
        a[i] = a[j];
        i = j;                  // Move down to the child's position
        j = 2 * i + 1;          // Move to the new left child
    }
    a[i] = lastElement;         // Place lastElement in its correct position
}



int main() {
    int a[] = {40, 25, 35, 10, 5, 20, 30}; //Max heap
    int size = sizeof(a) / sizeof(a[0]);
    
    // Delete the root element from the heap
    deleteHeap(a, &size);
    
    // Print the heap after deletion
    printf("Heap after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return 0;
}