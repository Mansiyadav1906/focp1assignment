#include <stdio.h>
int main()
{
    int arr[100];
    int n, i, pos, num;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\nWhere do you want to insert the element?\n");
    printf("1. Front\n2. Middle\n3. End\n");
    int choice;
    scanf("%d", &choice);
    printf("Enter the element to insert: ");
    scanf("%d", &num);
    if (choice == 1)
    {
        pos = 0;
    }
    else if (choice == 2)
    {
        pos = n / 2;
    }
    else if (choice == 3)
    {
        pos = n;
    }
    else
    {
        printf("Invalid choice!\n");
        return 0;
    }
    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = num;
    n++;
    printf("\nArray after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}