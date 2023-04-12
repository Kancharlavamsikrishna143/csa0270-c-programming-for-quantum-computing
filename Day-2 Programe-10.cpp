#include <stdio.h>

int main() {
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int searchElement = 23;
    int i, position = -1;
    
    // search for the element in the array
    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            position = i;
            break;
        }
    }
    
    // print the position of the element in the array
    if (position == -1) {
        printf("Given element %d is not found in the array", searchElement);
    } else {
        printf("Given element %d is found at %dth position", searchElement, position+1);
    }
    
    return 0;
}
