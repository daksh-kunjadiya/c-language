#include <stdio.h>
#include <string.h>

struct Employee
{
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[50];
    char emp_city[50];
    int emp_experience;
    char emp_company_name[50];
};

int main()
{
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee e[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &e[i].emp_id);
        printf("Name: ");
        scanf("%s", e[i].emp_name);
        printf("Age: ");
        scanf("%d", &e[i].emp_age);
        printf("Role: ");
        scanf("%s", e[i].emp_role);
        printf("City: ");
        scanf("%s", e[i].emp_city);
        printf("Experience (in years): ");
        scanf("%d", &e[i].emp_experience);
        printf("Company Name: ");
        scanf("%s", e[i].emp_company_name);
    }

    printf("\nEmployee Records:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Employee %d\n", i + 1);
        printf("ID: %d\n", e[i].emp_id);
        printf("Name: %s\n", e[i].emp_name);
        printf("Age: %d\n", e[i].emp_age);
        printf("Role: %s\n", e[i].emp_role);
        printf("City: %s\n", e[i].emp_city);
        printf("Experience: %d years\n", e[i].emp_experience);
        printf("Company Name: %s\n", e[i].emp_company_name);
        printf("\n");
    }

    return 0;
}
