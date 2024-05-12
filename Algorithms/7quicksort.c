#include<stdio.h>
int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++){
        if(arr[j]<=pivot){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    i++;
    int temp=arr[i];
    arr[i]=arr[r];
    arr[r]=temp;
    return i;
}
void quicksort(int arr[],int l,int r){
    if(l<r){
    int m=partition(arr,l,r);
    quicksort(arr,l,m-1);
    quicksort(arr,m+1,r);
    }
}
int main(){
    int arr[5]={9,8,7,1,3};
    int l=0;
    int r=4;
    quicksort(arr,l,r);
    for(int i=0;i<=r;i++)
    {
    printf(" %d",arr[i]);
    }
}