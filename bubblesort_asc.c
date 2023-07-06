// write a program to enter n number in array. Redisplay the array with elements being sorted in ascending order

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, j, temp, arr[10];
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The sorted array in ascending order : ");
    for (i = 0; i < n; i++)
    {
        printf("\n Arr[%d] = %d",i,arr[i]);
    }
    return 0;
}


