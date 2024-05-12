#include<stdio.h>
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[largest])
        largest=left;
    if(right<n && arr[right]>arr[largest])
        largest=right;
    if(largest!=i){
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[],int n){
    int i;
    for(i=n/2;i>=0;i--){
        heapify(arr,n,i);
    }
    for(i=n-1;i>=0;i--){
        swap(&arr[i],&arr[0]);
        heapify(arr,i,0);
    }

}
void printarray(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
}
int main(){
    int arr[]={12,11,13,5,6,7};
    int n=(sizeof(arr))/sizeof(arr[0]);
    heapsort(arr,n);
    printf("sorted array is\n");
    printarray(arr,n);
}