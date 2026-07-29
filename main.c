#include <stdio.h>

#define MAX_STUDENTS 100

struct Student {
    int id;
    char name[50];
    float average;
};

int main() {

    struct Student students[MAX_STUDENTS];
    int choice;
    int count = 0;

    do {
        printf("\n==============================\n");
        printf(" Student Management System\n");
        printf("==============================\n");

        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                if(count < MAX_STUDENTS) {

                    printf("\nEnter Student ID: ");
                    scanf("%d", &students[count].id);

                    printf("Enter Student Name: ");
                    scanf("%s", students[count].name);

                    printf("Enter Student Average: ");
                    scanf("%f", &students[count].average);

                    count++;

                    printf("Student added successfully!\n");
                }
                else {
                    printf("Maximum number of students reached!\n");
                }
                break;


            case 2:
                printf("\n------ Students List ------\n");

                if(count == 0) {
                    printf("No students available.\n");
                }
                else {
                    for(int i = 0; i < count; i++) {
                        printf("\nStudent %d\n", i+1);
                        printf("ID: %d\n", students[i].id);
                        printf("Name: %s\n", students[i].name);
                        printf("Average: %.2f\n", students[i].average);
                    }
                }
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
