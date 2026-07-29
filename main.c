#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float average;
};

int main() {
    struct Student student;

    printf("=================================\n");
    printf(" Student Management System\n");
    printf("=================================\n");

    printf("Enter Student ID: ");
    scanf("%d", &student.id);

    printf("Enter Student Name: ");
    scanf("%s", student.name);

    printf("Enter Student Average: ");
    scanf("%f", &student.average);

    printf("\n------ Student Information ------\n");
    printf("ID      : %d\n", student.id);
    printf("Name    : %s\n", student.name);
    printf("Average : %.2f\n", student.average);

    return 0;
}
