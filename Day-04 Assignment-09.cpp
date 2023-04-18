#include <stdio.h>
#include <string.h>

// Define the union
union student {
    char name[50];
    float gpa;
};

// Main function
int main() {
    // Declare a variable of the union type
    union student s;
    
    // Prompt the user to enter the student's name and GPA
    printf("Enter student's name: ");
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = '\0'; // Remove trailing newline character
    
    printf("Enter student's GPA: ");
    scanf("%f", &s.gpa);
    
    // Print the student's name and GPA
    printf("Student's name: %s\n", s.name);
    printf("Student's GPA: %.2f\n", s.gpa);
    
    return 0;
}
