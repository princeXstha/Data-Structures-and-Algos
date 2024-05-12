#include<stdio.h>
void selectionsort(int arr[]){
    int i,j;
    for(i=0;i<10;i++){
        int min=arr[i];
        int pos=i;
        for(j=i+1;j<10;j++){
            if(arr[j]<min){
                min=arr[j];
                pos=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
    }
}
void printarray(int arr[]){
    for(int i=0;i<10;i++){
        printf(" %d",arr[i]);
    }
}
int main(){
    int arr[10]={55,67,34,212,89,55,7,3,98,1};
    printf("before sorting\n");
    printarray(arr);
    selectionsort(arr);
    printf("\nafter sorting\n");
    printarray(arr);
}