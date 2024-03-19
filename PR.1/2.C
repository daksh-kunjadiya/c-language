#include<stdio.h>
#include<conio.h>
main()
{
    float base_salary, HRA, DA, TA, gross_salary;
    clrscr();

    printf("Enter the base salary : ");
    scanf("%f", &base_salary);
    printf("Enter the HRA : ");
    scanf("%f", &HRA);
    printf("Enter the DA : ");
    scanf("%f", &DA);
    printf("Enter the TA : ");
    scanf("%f", &TA);

    HRA = (HRA / 100) * base_salary;
    DA = (DA / 100) * base_salary;
    TA = (TA / 100) * base_salary;

    gross_salary = base_salary + HRA + DA + TA;

    printf("Gross Salary: Rs. %.2f\n", gross_salary);
    getch();
}