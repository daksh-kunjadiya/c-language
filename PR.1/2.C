#include<stdio.h>
#include<conio.h>
main()
	{
	float base_salary, hra_percentage, da_percentage, ta_percentage;
	float hra, da, ta, gross_salary;
	clrscr();

	printf("Enter the base salary: ");
	scanf("%f", &base_salary);
	printf("Enter the percentage of HRA: ");
	scanf("%f", &hra_percentage);
	printf("Enter the percentage of DA: ");
	scanf("%f", &da_percentage);
	printf("Enter the percentage of TA: ");
	scanf("%f", &ta_percentage);

	hra = (hra_percentage / 100) * base_salary;
	da = (da_percentage / 100) * base_salary;
	ta = (ta_percentage / 100) * base_salary;

	gross_salary = base_salary + hra + da + ta;

	printf("Gross Salary: Rs. %.2f\n", gross_salary);

	getch();
}
