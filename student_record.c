#include <stdio.h>

int main() {
    char name[50];
    int roll_no;
    float marks;

    printf("Enter student name: ");
    scanf("%49s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll_no);

    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("\n--- Student Record ---\n");
    printf("Name: %s\n", name);
    printf("Roll Number: %d\n", roll_no);
    printf("Marks: %.2f\n", marks);

    return 0;
}
