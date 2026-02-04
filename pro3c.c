#include <stdio.h>
struct Student {
int roll;
};
void display(struct Student s) {
printf("Roll Number: %d\n", s.roll);
}
int main() {
struct Student s;
printf("Enter Roll: ");
scanf("%d", &s.roll);
display(s);
return 0;
}
