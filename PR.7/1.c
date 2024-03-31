#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}
int modulus(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    else
    {
        printf("Error: Modulus by zero\n");
        return 0;
    }
}

int main()
{
    char choice;
    int n1, n2;
    while (choice != 0)
    {
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice != '0')
        {
            printf("Enter the first n2ber: ");
            scanf("%d", &n1);
            printf("Enter the second n2ber: ");
            scanf("%d", &n2);

            switch (choice)
            {
            case '1':
                printf("Addition of %d and %d is %d\n", n1, n2, add(n1, n2));
                break;
            case '2':
                printf("Subtraction of %d and %d is %d\n", n1, n2, subtract(n1, n2));
                break;
            case '3':
                printf("Multiplication of %d and %d is %d\n", n1, n2, multiply(n1, n2));
                break;
            case '4':
                printf("Division of %d and %d is %d\n", n1, n2, divide(n1, n2));
                break;
            case '5':
                printf("Modulus of %d and %d is %d\n", n1, n2, modulus(n1, n2));
                break;
            default:
                printf("Invalid choice\n");
                break;
            }
        }
    }

    printf("Exiting program\n");
    return 0;
}
