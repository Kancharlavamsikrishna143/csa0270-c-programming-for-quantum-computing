#include <stdio.h>

void reverse_string(char *str);

int main() {
    char str[100];
    printf("Enter any string: ");
    scanf("%s", str);
    printf("The original string is: %s\n", str);
    reverse_string(str);
    printf("The reversed string is: %s\n", str);
    return 0;
}

void reverse_string(char *str) {
    char *start = str;
    char *end = str;
    while (*end) {
        end++;
    }
    end--;
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}