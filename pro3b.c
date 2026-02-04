#include <stdio.h>
struct Student {
int roll;
float marks;
};
int main() {
struct Student s;
struct Student *ptr = &s;
    printf("Enter Roll and Marks: ");
    scanf("%d %f", &ptr->roll, &ptr->marks);
    printf("\nRoll: %d\nMarks: %.2f\n", ptr->roll, ptr->marks);
    return 0;
}
