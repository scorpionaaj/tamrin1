#include <stdio.h>
int main()
{
    int rows, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    i = 1;
    while (i <= rows)
    {
        j = i;
        while (j <= rows)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
