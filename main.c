#include <stdio.h>

int main() {
    int choice;

    printf("=====================================\n");
    printf("   Student Management System\n");
    printf("=====================================\n");

    printf("1. Add Student\n");
    printf("2. Display Students\n");
    printf("3. Search Student\n");
    printf("4. Update Student\n");
    printf("5. Delete Student\n");
    printf("0. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Add Student selected.\n");
            break;
        case 2:
            printf("Display Students selected.\n");
            break;
        case 3:
            printf("Search Student selected.\n");
            break;
        case 4:
            printf("Update Student selected.\n");
            break;
        case 5:
            printf("Delete Student selected.\n");
            break;
        case 0:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
