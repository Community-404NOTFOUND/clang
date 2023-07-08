// bucket sort ascending order

#include <stdio.h>
#include <conio.h>

int largest(int arr[], int n)
{
    int large = arr[0], i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }
    return large;
}

void radix_sort(int arr[], int n)
{
    int bucket_count[10], bucket[10][10], large , NON=0, pass, i, remainder,divisor=1,k,j;
    large = largest(arr, n);
    while (large > 0)
    {
        NON++;
        large /= 10;
    }
    for (pass = 0; pass < NON; pass++)
    {
        for (i = 0; i < 10; i++)
        {
            bucket_count[i] = 0;
        }
        for (i = 0; i < n; i++)
        {
            remainder = (arr[i]/divisor) % 10;
            bucket[remainder][bucket_count[remainder]] = arr[i];
            bucket_count[remainder] += 1;
        }
        i = 0;
        for(k=0;k<10;k++){
            for(j=0;j<bucket_count[k];j++){
                arr[i]=bucket[k][j];
                i++;
            }
        }
        divisor*=10;
    }
}

int main()
{
    int arr[10], k, j, n, i;
    printf("Enter the number of elements to enter : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    radix_sort(arr, n);
    printf("The sorted array : ");
    for (i = 0; i < n; i++)
    {
        printf("\n Arr[%d] = %d", i, arr[i]);
    }
}
