#include <stdio.h>

int findOddElement(int arr[], int n) {
    int i, oddElement = 0;
    for (i = 0; i < n; i++) {
        oddElement ^= arr[i];
    }
    return oddElement;
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements (only two different elements allowed): ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int oddElement = findOddElement(arr, n);
    printf("The odd element is %d\n", oddElement);
    return 0;
}
