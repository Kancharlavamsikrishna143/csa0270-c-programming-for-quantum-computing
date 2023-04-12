#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len, flag = 1;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin); // read input string
    
    len = strlen(str) - 1; // exclude newline character from length
    
    // check for palindrome
    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
    }
    
    if (flag) {
        printf("The string is a palindrome");
    } else {
        printf("The string is not a palindrome");
    }
    
    return 0;
}
