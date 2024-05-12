#include<stdio.h>
void insertionsort(int arr[]){
    int key;
    int i,j;
    for(i=1;i<10;i++){
        key=arr[i];
        j=i-1;
        while(key<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
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
    insertionsort(arr);
    printf("\nafter sorting\n");
    printarray(arr);
}