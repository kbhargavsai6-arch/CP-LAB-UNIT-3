#include <stdio.h>
typedef struct {
 int id;
 float salary;
} Employee;
int main() {
Employee e;
printf("Enter Employee ID: ");
scanf("%d", &e.id);
printf("Enter Salary: ");
scanf("%f", &e.salary);
printf("\nEmployee ID: %d\nSalary: %.2f\n", e.id, e.salary);
return 0;
}
