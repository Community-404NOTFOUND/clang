// counting sort ascending

#include <stdio.h>
#include <conio.h>

int largest(int arr[], int n)
{
    int large = arr[0], i;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
}

void counting_sort(int arr[], int n, int large)
{
    int i, a[10], b[10];
    for (i = 0; i < n; i++)
    {
        a[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        a[arr[i]]++;
    }
    for (i = 1; i < n; i++)
    {
        a[i] = a[i] + a[i - 1];
    }
    for (i = n - 1; i >= 0; i--)
    {
        b[--a[arr[i]]] = arr[i];
    }
    for (i = 0; i < n; i++)
    {
        arr[i] = b[i];
    }
}

int main()
{
    int arr[10], k, j, n, i, large;
    printf("Enter the number of elements to enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    large = largest(arr, n);
    counting_sort(arr, n, large);
    printf("The sorted array : ");
    for (i = 0; i < n; i++)
    {
        printf("\n Arr[%d] = %d", i, arr[i]);
    }
}