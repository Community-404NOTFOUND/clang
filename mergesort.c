#include <stdio.h>
#include <conio.h>

void merge(int arr[], int start, int mid, int end)
{
    int i = start, j = mid + 1, index = start, temp[10], z;
    while ((i <= mid) && (j <= end))
    {
        if (arr[i] < arr[j])
        {
            temp[index] = arr[i];
            i++;
        }
        else
        {
            temp[index] = arr[j];
            j++;
        }
        index++;
    }
    if (i > mid)
    {
        while (j <= end)
        {
            temp[index] = arr[j];
            j++;
            index++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temp[index] = arr[i];
            i++;
            index++;
        }
    }
    for (z = start; z <= end; z++)
        arr[z] = temp[z];
}

void merge_sort(int arr[], int start, int end)
{
    if (start < end)
    {
        int mid;
        mid = (start + end) / 2;
        merge_sort(arr, start, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

int main()
{
    int arr[10], i, n;
    printf("Enter how many elements you want to enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    merge_sort(arr, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        printf("\n Arr[%d] = %d", i, arr[i]);
    }
}