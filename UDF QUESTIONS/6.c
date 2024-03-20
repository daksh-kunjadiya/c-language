#include <stdio.h>

int findlargest(int a[], int size)
{
    int i;

    int largest = a[0];

    for (i = 1; i < size; i++)
    {
        if (a[i] > largest)
        {
            largest = a[i];
        }
    }
    return largest;
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

    printf("The array is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    int largest = findlargest(a, size);

    printf("The largest number in the array is: %d\n", largest);
}
