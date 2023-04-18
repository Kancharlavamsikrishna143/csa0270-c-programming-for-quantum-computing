#include <stdio.h>
#include <string.h>

// Define the maximum number of students
#define MAX_STUDENTS 100

// Define the student structure
struct student {
    int roll_no;
    char stud_name[50];
    float mark1, mark2, mark3;
    float total, avg;
};

// Declare an array to hold the student records
struct student records[MAX_STUDENTS];

// Declare a variable to keep track of the number of students
int num_students = 0;

// Function to add a student record
void add_student() {
    // Check if there's still space in the array
    if (num_students >= MAX_STUDENTS) {
        printf("The array is full, cannot add more students.\n");
        return;
    }
    
    // Prompt the user to input the student details
    printf("Enter roll number: ");
    scanf("%d", &records[num_students].roll_no);
    printf("Enter student name: ");
    scanf("%s", records[num_students].stud_name);
    printf("Enter mark 1: ");
    scanf("%f", &records[num_students].mark1);
    printf("Enter mark 2: ");
    scanf("%f", &records[num_students].mark2);
    printf("Enter mark 3: ");
    scanf("%f", &records[num_students].mark3);
    
    // Calculate the total and average marks
    records[num_students].total = records[num_students].mark1 + records[num_students].mark2 + records[num_students].mark3;
    records[num_students].avg = records[num_students].total / 3.0;
    
    // Increment the number of students
    num_students++;
    
    printf("Student added successfully.\n");
}

// Function to sort the student records in descending order of marks
void sort_students() {
    // Loop through all the students in the array
    for (int i = 0; i < num_students; i++) {
        // Loop through the remaining students
        for (int j = i+1; j < num_students; j++) {
            // Compare the total marks
            if (records[i].total < records[j].total) {
                // Swap the student records
                struct student temp = records[i];
                records[i] = records[j];
                records[j] = temp;
            }
        }
    }
    
    printf("Student records sorted in descending order of marks.\n");
}

// Function to display all student records
void display_students() {
    // Check if there are any students in the array
    if (num_students == 0) {
        printf("The array is empty, cannot display any students.\n");
        return;
    }
    
    // Display the header
    printf("%-10s %-20s %-10s %-10s %-10s %-10s %-10s\n", "Roll No", "Name", "Mark 1", "Mark 2", "Mark 3", "Total", "Avg");
    
    // Loop through all the students in the array
    for (int i = 0; i < num_students; i++) {
        // Display the student record
        printf("%-10d %-20s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f\n", records[i].roll_no, records[i].stud_name, records[i].mark1, records[i].mark2, records[i].mark3, records[i].total, records[i].avg);
    }
}

// Main function
int main()
