#include <stdio.h>

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void ascendingorder(int a[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a, j, j + 1);
            }
        }
    }
}

void descendingorder(int a[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                swap(a, j, j + 1);
            }
        }
    }
}

void printarray(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main()
{
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter elements of the array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Original array: ");
    printarray(a, size);

    printf("Array in ascending order: ");
    ascendingorder(a, size);
    printarray(a, size);

    printf("Array in descending order: ");
    descendingorder(a, size);
    printarray(a, size);

    return 0;
}
