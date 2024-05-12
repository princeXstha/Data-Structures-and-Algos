#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp; 
}
void bubblesort(int arr[]){
     int i,j;
     for (i=0;i<9;i++){
        for(j=0;j<(10-1-i);j++){
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
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
    bubblesort(arr);
    printf("\nafter sorting\n");
    printarray(arr);
}
