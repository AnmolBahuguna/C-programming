#include <stdio.h>
struct Employee {
    char name[50];
    char empCode[10];
    float salary;
};

int main() {
    struct Employee e;
    printf("Enter name, code, and salary: ");
    scanf("%s %s %f", e.name, e.empCode, &e.salary);
    printf("\nAB Corporation\nName: %s\nEmpCode: %s\nSalary: Rs%.2f\n", e.name, e.empCode, e.salary);
    return 0;
}
