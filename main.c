#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float average;
};

int main() {

    struct Student student;
    int choice;

    do {
        printf("\n==============================\n");
        printf(" Student Management System\n");
        printf("==============================\n");

        printf("1. Add Student\n");
        printf("2. Display Student\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nEnter Student ID: ");
                scanf("%d", &student.id);

                printf("Enter Student Name: ");
                scanf("%s", student.name);

                printf("Enter Student Average: ");
                scanf("%f", &student.average);

                printf("Student added successfully!\n");
                break;

            case 2:
                printf("\n------ Student Information ------\n");
                printf("ID: %d\n", student.id);
                printf("Name: %s\n", student.name);
                printf("Average: %.2f\n", student.average);
                break;

            case 0:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 0);

    return 0;
}
