#include <stdio.h>

int main() {
   int n, arr[100], max1, max2, i;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter the elements of the array: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   max1 = max2 = arr[0];

   for (i = 1; i < n; i++) {
      if (arr[i] > max1) {
         max2 = max1;
         max1 = arr[i];
      } else if (arr[i] > max2 && arr[i] != max1) {
         max2 = arr[i];
      }
   }

   printf("The FIRST LARGEST = %d\n", max1);
   printf("THE SECOND LARGEST = %d\n", max2);

   return 0;
}
