#include <stdio.h>
struct Student {
int roll;
};
void display(struct Student s[], int n) {
int i;
for(i = 0; i < n; i++)
printf("Roll: %d\n", s[i].roll);
}
int main() {
struct Student s[2];
int i;
for(i = 0; i < 2; i++) {
printf("Enter Roll: ");
scanf("%d", &s[i].roll);
}
display(s, 2);
return 0;
}
