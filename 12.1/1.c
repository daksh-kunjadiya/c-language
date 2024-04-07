#include <stdio.h>
#include <string.h>

struct Student
{
    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[50];
    char stu_city[50];
    int stu_standard;
    char stu_school[50];
};

int main()
{
    int n;
    printf("enter number of student : ");
    scanf("%d", &n);
    struct Student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &s[i].stu_id);
        printf("Name: ");
        scanf("%s", s[i].stu_name);
        printf("Age: ");
        scanf("%d", &s[i].stu_age);
        printf("Course: ");
        scanf("%s", s[i].stu_course);
        printf("City: ");
        scanf("%s", s[i].stu_city);
        printf("Standard: ");
        scanf("%d", &s[i].stu_standard);
        printf("School: ");
        scanf("%s", s[i].stu_school);
    }

    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("ID: %d\n", s[i].stu_id);
        printf("Name: %s\n", s[i].stu_name);
        printf("Age: %d\n", s[i].stu_age);
        printf("Course: %s\n", s[i].stu_course);
        printf("City: %s\n", s[i].stu_city);
        printf("Standard: %d\n", s[i].stu_standard);
        printf("School: %s\n", s[i].stu_school);
        printf("\n");
    }

    return 0;
}
