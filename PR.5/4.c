#include <stdio.h>
main()
{
    int r, c;
    printf("enter row : ");
    scanf("%d", &r);
    printf("enter column : ");
    scanf("%d", &c);

    int a[r][c];
    int i, j;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("eneter element :");
            scanf("%d", &a[i][j]);
        }
    }

    int row_num, row_sum = 0;
    printf("\nEnter row number: ");
    scanf("%d", &row_num);
    printf("Elements of row %d: ", row_num);

    for (i = 0; i < r; i++)
    {
        printf("%d", a[i][row_num]);
        row_sum += a[i][row_num];
        if (i < c - 1)
        {
            printf(",");
        }
    }
    printf("\nThe sum of row %d : %d\n", row_num, row_sum);

    int col_num, col_sum = 0;
    printf("\nEnter column number: ");
    scanf("%d", &col_num);
    printf("Elements of column %d: ", col_num);

    for (j = 0; j < c; j++)
    {
        printf("%d", a[col_num][j]);
        col_sum += a[col_num][j];
        if (j < r - 1)
        {
            printf(",");
        }
    }
    printf("\nThe sum of column %d : %d\n", col_num, col_sum);
}