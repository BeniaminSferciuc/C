#include <stdio.h>

// Quick Sort - sortarea elementelor

void swap(int *a, int *b)
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int partition(int a[], int start, int end)
{
    int pivot = a[end];
    int part_index = start;

    for (int i = start; i <= end - 1; i++)
    {
        if (a[i] <= pivot)
        {
            swap(&a[i], &a[part_index]);
            part_index++;
        }
    }
     
    swap(&a[end], &a[part_index]);
    return part_index;
}

void quick_sort(int a[], int start, int end)
{
    int piv_index;

    if (start < end)
    {
        piv_index = partition(a , start, end);
        quick_sort(a, start, piv_index - 1);
        quick_sort(a, piv_index + 1, end);
    }
}

int main(void)
{
    int a[] = {10, 45, -3, 7, 18, 105, 42};
    int n = sizeof(a) / sizeof(a[0]);

    quick_sort(a, 0, n-1);

    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}