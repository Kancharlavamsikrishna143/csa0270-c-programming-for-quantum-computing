#include <stdio.h>
int main() {
	int num;
    int start, end, i;
    printf("Enter two positive integers: ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if ((i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

int Prime(int num) {
    int i;
    if (num <= 1) {
        return 0;
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

