#include <stdio.h>
// array to pointer increament decreament
int main()
{
    int n;

    printf("number of elements  = ");
    scanf("%d ", &n);
    int arr[n];
    int *ptr = arr;

    printf("Enter the elements:\n");

    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element\n", i + 1);
        scanf("%d", (ptr + i));
    }
    for (int j = 0; j < n; j++)
    {
        printf("\n The %d element = %d", j + 1, *(ptr + j));
    }

    return 0;
}
