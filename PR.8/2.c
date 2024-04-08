#include <stdio.h>

int cube(int num)
{
    return num * num * num;
}

int main()
{
    int size;
    printf("Enter array's size\t: ");
    scanf("%d", &size);

    int arr[size][size];
    printf("\n--:Enter elements of the 2D array:--\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {   
            printf("enetr element\t: ");
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n--:Cubes of all elements of the 2D array:--\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int *ptr = &arr[i][j];
            printf("%d\t", cube(*ptr));
        }
        printf("\n");
    }

    return 0;
}
