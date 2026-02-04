#include <stdio.h>
struct Date {
int day, month, year;
};
struct Employee {
int idz;
struct Date doj;
};
int main() {
struct Employee e;
printf("Enter Employee ID: ");
scanf("%d", &e.id);
printf("Enter Date of Joining (dd mm yyyy): ");
scanf("%d%d%d", &e.doj.day, &e.doj.month, &e.doj.year);
printf("\nID: %d\nDOJ: %d/%d/%d\n",
e.id, e.doj.day, e.doj.month, e.doj.year);
return 0;
}
