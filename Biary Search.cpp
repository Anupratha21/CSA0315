#include <stdio.h>

int main()
{
    int A[20], n, key, i, flag = 0, mid, F, L, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements (in ascending order):\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the key: ");
    scanf("%d", &key);

    F = 0;
    L = n - 1;

    while (F <= L)
    {
        mid = (F + L) / 2;

        if (A[mid] == key)
        {
            flag = 1;
            pos = mid;
            break;
        }
        else if (A[mid] < key)
            F = mid + 1;
        else
            L = mid - 1;
    }

    if (flag == 1)
        printf("Element found at position %d\n", pos + 1);
    else
        printf("Element not found\n");

    return 0;
}
