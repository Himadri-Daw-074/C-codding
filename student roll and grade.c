#include <stdio.h>

struct student {
    int roll;
    char name[50];   // bigger size for names
    char grade[2];
};

int main() {
    struct student s[3];   // array of 3 students
    int i = 0;
    // Input details of 3 students
    for(i ; i < 3; i++) {
        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &s[i].roll);
        printf("Enter student name of student %d: ", i+1);
        scanf("%s", &s[i].name);
        printf("Enter Grade of Student %d: ", i+1);
        scanf("%s", &s[i].grade);
    }

    // Display student records
    printf("\n--- Student Records ---\n");
    for(int i = 0; i < 3; i++) {
        printf("Roll: %d, Name: %s, Grade: %s\n", s[i].roll, s[i].name, s[i].grade);
    }

    return 0;
}