#include <stdio.h>

void reverse(int *a, int size)
{
    int *left = a;
    int *right = a + size - 1;

    while (left < right)
    {

        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main()
{
    int size;
    printf("Enter array size : ");
    scanf("%d", &size);

    int a[size];

    printf("\n--Enter elements of the array--\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter elements : ");
        scanf("%d", &a[i]);
    }

    reverse(a, size);

    printf("Reversed array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");

    return 0;
}
