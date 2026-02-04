#include <stdio.h>
struct Student {
int roll;
char name[20];   
float marks;
};
int main() {
struct Student s;
printf("Enter Roll No: ");
scanf("%d", &s.roll);
printf("Enter Name: ");
scanf("%s", s.name);
printf("Enter Marks: ");
scanf("%f", &s.marks);
printf("\nStudent Details:\n");
printf("Roll: %d\nName: %s\nMarks: %.2f\n", s.roll, s.name, s.marks);
return 0;
}
