#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
    int eno;
    char ename[50];
    float salary;
};

void print_highest_salary_employee(struct employee employees[], int n) {
    int index_of_highest_salary = 0;
    for(int i = 1; i < n; i++) {
        if(employees[i].salary > employees[index_of_highest_salary].salary) {
            index_of_highest_salary = i;
        }
    }
    printf("Employee with highest salary:\n");
    printf("Employee Number: %d\n", employees[index_of_highest_salary].eno);
    printf("Name: %s\n", employees[index_of_highest_salary].ename);
    printf("Salary: %.2f\n", employees[index_of_highest_salary].salary);
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee employees[n];
    for(int i = 0; i < n; i++) {
        printf("Enter details for employee %d:\n", i+1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].eno);
        printf("Name: ");
        scanf("%s", employees[i].ename);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    print_highest_salary_employee(employees, n);

    return 0;
}
