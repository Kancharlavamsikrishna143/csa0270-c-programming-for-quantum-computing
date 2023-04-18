#include <stdio.h>

// Define the union
union data {
    int num;
    float fnum;
};

// Main function
int main() {
    // Declare a variable of the union type
    union data input;
    
    // Prompt the user to enter a value
    printf("Enter a value (integer or float): ");
    if (scanf("%d", &input.num) == 1) {
        printf("You entered an integer: %d\n", input.num);
    } else {
        scanf("%f", &input.fnum);
        printf("You entered a float: %.2f\n", input.fnum);
    }
    
    return 0;
}
