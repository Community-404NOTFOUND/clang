// quick sort ascending

#include <stdio.h>
#include <conio.h>

int partition(int arr[], int start, int end)
{
    int i = start, pivot = start, j = end, flag = 0, temp;
    while (flag != 1)
    {
        while ((arr[pivot] <= arr[j]) && (pivot != j))
            j--;
        if (pivot == j)
            flag = 1;
        else if (arr[pivot] > arr[j])
        {
            temp = arr[pivot];
            arr[pivot] = arr[j];
            arr[j] = temp;
            pivot = j;
        }
        if (flag != 1)
        {
            while ((arr[pivot] >= arr[i]) && (pivot != i))
                i++;
            if (pivot == i)
                flag = 1;
            else if (arr[pivot] < arr[i])
            {
                temp = arr[pivot];
                arr[pivot] = arr[i];
                arr[i] = temp;
                pivot = i;
            }
        }
    }
    return pivot;
}

void quick_sort(int arr[], int beg, int end)
{
    int mid;
    if (beg < end)
    {
        mid = partition(arr, beg, end);
        quick_sort(arr, beg, mid - 1);
        quick_sort(arr, mid + 1, end);
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
    quick_sort(arr, 0, n - 1);
    for (i = 0; i < n; i++)
    {
        printf("\n Arr[%d] = %d", i, arr[i]);
    }
}
