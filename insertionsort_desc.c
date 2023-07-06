// insertion sort of descending order

#include<stdio.h>
#include<conio.h>

void insertion_sort(int arr[],int n){
    int temp,k,j;
    for(k=1;k<n;k++){
        temp=arr[k];
        j=k-1;
        while((temp >= arr[j]) && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

int main() {
    int arr[10],k,j,n,i;
    printf("Enter the number of elements to enter : ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("\n Arr[%d] = ",i); 
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);
    printf("The sorted array : ");
    for(i=0;i<n;i++) {
        printf("\n Arr[%d] = %d",i,arr[i]);
    }
}

