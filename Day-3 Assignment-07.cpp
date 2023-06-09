#include <stdio.h>
#include <string.h>

// function to check if two strings are anagrams
int check_anagram(char [], char []);

int main()
{
   char first[100], second[100];

   printf("Enter the first string: ");
   gets(first);

   printf("Enter the second string: ");
   gets(second);

   if (check_anagram(first, second))
      printf("%s and %s are anagrams.\n", first, second);
   else
      printf("%s and %s are not anagrams.\n", first, second);

   return 0;
}

int check_anagram(char first[], char second[])
{
   int count[256] = {0}, i;

   // check if length of both strings are equal
   if (strlen(first) != strlen(second))
      return 0;

   // count the frequency of each character in the first string
   for (i = 0; first[i] != '\0'; i++)
      count[first[i]]++;

   // subtract the frequency of each character in the second string
   for (i = 0; second[i] != '\0'; i++)
   {
      count[second[i]]--;
      if (count[second[i]] < 0)
         return 0;
   }

   return 1;
}
