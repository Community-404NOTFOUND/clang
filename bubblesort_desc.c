// write a program to enter n number in array. Redisplay the array with elements being sorted in descending order

#include <stdio.h>
#include <conio.h>

int main()
{
    int i, j, n, temp, arr[10];
    printf("Enter the number of elements you want to enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("The sorted array has been : ");
    for (i = 0; i < n; i++)
    {
        printf("\n Arr[%d] = %d", i, arr[i]);
    }
}
