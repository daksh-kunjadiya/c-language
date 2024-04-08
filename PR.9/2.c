#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

float percentage(int total_marks)
{
    return (float)(total_marks) / 300 * 100;
}

int main()
{
    int n;
    printf("enter number of student : ");
    scanf("%d", &n);
    struct Student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter details of Student %d:\n", i + 1);
        printf("Roll no => ");
        scanf("%d", &s[i].roll_no);
        printf("Name => ");
        scanf("%s", s[i].name);
        printf("Chemistry => ");
        scanf("%d", &s[i].chem_marks);
        printf("Mathematics => ");
        scanf("%d", &s[i].maths_marks);
        printf("Physics => ");
        scanf("%d", &s[i].phy_marks);
    }

    printf("\nOutput:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s (%d)\n", s[i].name, s[i].roll_no);
        printf("Chemistry => %d\n", s[i].chem_marks);
        printf("Mathematics => %d\n", s[i].maths_marks);
        printf("Physics => %d\n", s[i].phy_marks);
        int total_marks = s[i].chem_marks + s[i].maths_marks + s[i].phy_marks;
        printf("Total => %d/300\n", total_marks);
        printf("Percent => %.2f%%\n\n", percentage(total_marks));
    }

    return 0;
}
