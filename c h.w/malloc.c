#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main() {
int *ptr_array[SIZE]; // Array of pointers to integers
int i;
printf("Enter 10 integers:\n");
for (i = 0; i < SIZE; i++)
{
ptr_array[i] =(int*)malloc(sizeof(int));
scanf("%d", ptr_array[i]);
}
printf("\nYou entered:\n");
for (i = 0; i < SIZE; i++) {
printf("%d\n", *ptr_array[i]);
}
for (i = 0; i < SIZE; i++) {
free(ptr_array[i]);
}
return 0;
}
