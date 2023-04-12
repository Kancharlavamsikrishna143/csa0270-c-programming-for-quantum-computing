#include <stdio.h>

void deleteElementByIndex(int arr[], int *n, int index) {
    int i;
    for (i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

int main() {
    int n, i, index, value;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index of the element to delete: ");
    scanf("%d", &index);
    deleteElementByIndex(arr, &n, index);
    printf("Array after deleting element at index %d:\n", index);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
