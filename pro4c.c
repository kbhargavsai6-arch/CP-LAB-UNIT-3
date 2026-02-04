#include <stdio.h>
#include <stdlib.h>
int main() {
int *ptr, n, i;
printf("Enter initial size: ");
scanf("%d", &n);
ptr = (int*)malloc(n * sizeof(int));
printf("Enter elements:\n");
for(i = 0; i < n; i++)
scanf("%d", &ptr[i]);
printf("Enter new size: ");
scanf("%d", &n);
ptr = (int*)realloc(ptr, n * sizeof(int));
printf("Updated elements:\n");
for(i = 0; i < n; i++)
printf("%d ", ptr[i]);
free(ptr);
return 0;
}
