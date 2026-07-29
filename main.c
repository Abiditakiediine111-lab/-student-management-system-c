#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

struct Student {
    int id;
    char name[50];
    float average;
};
void saveStudents(struct Student students[], int count);
void loadStudents(struct Student students[], int *count);
int main() {

    struct Student students[MAX_STUDENTS];
    int choice;
    int count = 0;

    loadStudents(students, &count);
    int searchID;
    int found;

    do {

        printf("\n==============================\n");
        printf(" Student Management System\n");
        printf("==============================\n");

        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
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

                    saveStudents(students, count);

                    printf("Student added successfully!\n");
                }
                break;


            case 2:
                for(int i = 0; i < count; i++) {

                    printf("\nStudent %d\n", i+1);
                    printf("ID: %d\n", students[i].id);
                    printf("Name: %s\n", students[i].name);
                    printf("Average: %.2f\n", students[i].average);

                }
                break;


            case 3:
                printf("\nEnter Student ID: ");
                scanf("%d", &searchID);

                found = 0;

                for(int i = 0; i < count; i++) {

                    if(students[i].id == searchID) {

                        printf("\nStudent Found\n");
                        printf("Name: %s\n", students[i].name);
                        printf("Average: %.2f\n", students[i].average);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student not found!\n");

                break;


            case 4:
                printf("\nEnter Student ID to update: ");
                scanf("%d", &searchID);

                found = 0;

                for(int i = 0; i < count; i++) {

                    if(students[i].id == searchID) {

                        printf("New name: ");
                        scanf("%s", students[i].name);

                        printf("New average: ");
                        scanf("%f", &students[i].average);
                        saveStudents(students, count);

                        printf("Student updated successfully!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student not found!\n");

                break;
            case 5:

    printf("\nEnter Student ID to delete: ");

    scanf("%d", &searchID);

    found = 0;

    for(int i = 0; i < count; i++) {

        if(students[i].id == searchID) {

            for(int j = i; j < count - 1; j++) {

                students[j] = students[j + 1];

            }

            count--;

            printf("Student deleted successfully!\n");

            found = 1;

            break;

        }

    }

    if(found == 0)

        printf("Student not found!\n");

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
void saveStudents(struct Student students[], int count)
{
    FILE *file;

    file = fopen("students.dat", "w");

    if(file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    fwrite(students, sizeof(struct Student), count, file);

    fclose(file);
}
void loadStudents(struct Student students[], int *count)
{
    FILE *file;

    file = fopen("students.dat", "r");

    if(file == NULL)
    {
        return;
    }

    *count = fread(students, sizeof(struct Student), MAX_STUDENTS, file);

    fclose(file);
}
Add load students function
