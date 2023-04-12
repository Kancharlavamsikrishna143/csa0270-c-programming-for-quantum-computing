#include <stdio.h>

// function to check if a number is composite
int isComposite(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[] = {16, 18, 27, 16, 23, 21, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int i;
    
    // count the number of composite numbers in the array
    for (i = 0; i < n; i++) {
        if (isComposite(arr[i])) {
            count++;
        }
    }
    
    // print the number of composite numbers
    printf("Number of composite numbers in the array: %d", count);
    
    return 0;
}
