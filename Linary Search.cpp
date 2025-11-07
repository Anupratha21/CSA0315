#include <stdio.h>

int main()
{
    int A[20], n, key, flag = 0, pos, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the key: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            pos = i;
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        printf("Element found at position %d\n", pos + 1);
    else
        printf("Element not found\n");

    return 0;
}
