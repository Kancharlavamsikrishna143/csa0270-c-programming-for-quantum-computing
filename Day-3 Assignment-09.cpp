#include <stdio.h>

void copyArray(int *arr1, int *arr2, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
}

int main() {
    int arr1[10], arr2[10], i, size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of array1:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
    copyArray(arr1, arr2, size);
    printf("Array1: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\nArray2: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
