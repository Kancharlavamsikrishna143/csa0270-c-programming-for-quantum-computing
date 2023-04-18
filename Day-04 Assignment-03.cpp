#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name[50];
    int roll_number;
    struct date birthday;
    struct date admission_date;
    int age;
};

int main() {
    struct student s;
    printf("Enter student name: ");
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = 0; // remove newline character

    printf("Enter roll number: ");
    scanf("%d", &s.roll_number);

    printf("Enter date of birth (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &s.birthday.day, &s.birthday.month, &s.birthday.year);

    printf("Enter date of admission (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &s.admission_date.day, &s.admission_date.month, &s.admission_date.year);

    // Calculate age at the time of admission
    time_t t = time(NULL);
    struct tm current_time = *localtime(&t);
    int current_year = current_time.tm_year + 1900;
    int current_month = current_time.tm_mon + 1;
    int current_day = current_time.tm_mday;

    int age = current_year - s.birthday.year;
    if(current_month < s.birthday.month || (current_month == s.birthday.month && current_day < s.birthday.day)) {
        age--;
    }
    s.age = age;

    printf("\nStudent Information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll_number);
    printf("Date of Birth: %d/%d/%d\n", s.birthday.day, s.birthday.month, s.birthday.year);
    printf("Date of Admission: %d/%d/%d\n", s.admission_date.day, s.admission_date.month, s.admission_date.year);
    printf("Age at the time of admission: %d\n", s.age);

    return 0;
}
