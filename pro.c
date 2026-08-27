#include <stdio.h>

void readArray(int *arr, int size)
{
    int *p;

    for (p = arr; p < arr + size; p++)
        scanf("%d", p);
}

void printArray(int *arr, int size)
{
    int *p;

    for (p = arr; p < arr + size; p++)
        printf("Value = %d, Address = %p\n", *p, (void *)p);
}

void reverseArray(int *arr, int size)
{
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int* findMax(int *arr, int size)
{
    int *max = arr;
    int *p;

    for (p = arr + 1; p < arr + size; p++)
    {
        if (*p > *max)
            max = p;
    }

    return max;
}

void swapElements(int *arr, int pos1, int pos2)
{
    int *p1 = arr + pos1;
    int *p2 = arr + pos2;
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int arr[10];
    int *max;

    printf("Enter 10 integers:\n");
    readArray(arr, 10);

    printf("\nOriginal array:\n");
    printArray(arr, 10);

    reverseArray(arr, 10);

    printf("\nReversed array:\n");
    printArray(arr, 10);

    max = findMax(arr, 10);

    printf("\nMaximum value = %d", *max);
    printf("\nMaximum address = %p\n", (void *)max);

    swapElements(arr, 0, 9);

    printf("\nAfter swapping positions 0 and 9:\n");
    printArray(arr, 10);

    return 0;
}