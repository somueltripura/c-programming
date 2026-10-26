#include <stdio.h>

int main() {
    int arr[5];
    
    // Input 5 integers from the user
    printf("Enter 5 integer numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Display all elements of the array
    printf("\nThe elements in the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}