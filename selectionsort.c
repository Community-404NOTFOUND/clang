// selection sort ascending 

#include<stdio.h>
#include<conio.h>

int smallest(int arr[],int k,int n){
    int i,small=arr[k],pos=k;
    for(i=k+1;i<n;i++){
        if(arr[i]>small){
            small=arr[i];
            pos=i;
        }
    }
    return pos;
}

void selection_sort(int arr[],int n){
    int k,pos,temp;
    for(k=0;k<n;k++){
        pos=smallest(arr,k,n);
        temp=arr[k];
        arr[k]=arr[pos];
        arr[pos]=temp;
    }
}

int main(){
    int arr[10],i,n;
    printf("Enter how many elements you want to enter : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    for(i=0;i<n;i++){
        printf("\n Arr[%d] = %d",i,arr[i]);
    }
}