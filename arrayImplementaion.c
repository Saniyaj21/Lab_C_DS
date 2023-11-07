#include <stdio.h>
void insertElm(int pos, int value, int n, int arr[], int i)
{
    printf("\nInsert Function Called\n");
    printf("Enter the index where the element should be inserted: ");
    scanf("%d", &pos);
    printf("Enter the value of the new element: ");
    scanf("%d", &value);

    if (pos < 0 || pos > n)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for (i = n - 1; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = value;
        n++;
        printf("Element inserted successfully.\n");
    }
}

void traverseArr(int i, int n, int arr[])
{
    printf("\nTraverse Function Called\n");
    printf("Elements in the array are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteElm(int pos, int n, int i, int arr[])
{
    printf("\nDelete Function Called\n");
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n)
    {
        printf("Invalid position!\n");
    }
    else
    {
        for (i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = 0;
        n--;
        printf("Element deleted successfully.\n");
    }
}

int main()
{
    int arr[100], i, n, pos, value , option;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (1)
    {
        printf("\nEnter 1 to Insert Values\nEnter 2 to Traverse Values\nEnter 3 to Delete Values\nEnter 4 to Exit\nEnter Option: -> ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            insertElm(pos, value, n, arr, i);
            break;

        case 2:
            traverseArr(i, n, arr);
            break;

        case 3:
            deleteElm(pos, n, i, arr);
            break;

        case 4:
            printf("\nExiting...\n");
            return 0;

        default:
            printf("\nInvalid option!\n");
            break;
        }
    }

    return 0;
}
