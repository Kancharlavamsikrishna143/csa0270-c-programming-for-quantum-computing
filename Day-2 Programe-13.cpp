#include <stdio.h>

int main() {
    int arr[6] = {7, 3, 9, 2, 6, 1};
    int i, max = arr[0], min = arr[0];
    
    for (i = 1; i < 6; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    printf("Maximum value in the array = %d\n", max);
    printf("Minimum value in the array = %d\n", min);
    
    return 0;
}
