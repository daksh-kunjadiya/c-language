#include <stdio.h>

main()
{
    int size, sum = 0;
    float avg;

    printf("Enter array size : ");
    scanf("%d", &size);

    int array[size];

    printf("Enter array elements : \n");
    for (int i = 0; i < size; i++)
    {
        printf("enter any element : ", i);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    avg = sum / size;
    printf("Average of an Array: %.2f\n", avg);
}