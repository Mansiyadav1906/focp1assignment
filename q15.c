#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;
    int i, last;

    printf("Original array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    last = arr[n - 1];
    for (i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
    printf("\nArray after one clockwise rotation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}