#include<stdio.h>
#include<time.h>
int search(int arr[],int ele){
    int i;
    for(i=0;i<7;i++){
        if(arr[i]==ele)
            return i;
    }
    return -1;
}
int main(){
    int arr[7]={1,3,5,7,9,10,12};
    int ele;
    printf("enter the element to search");
    scanf("%d",&ele);
    int s= search(arr,ele);
    if(s==-1)
        printf("not found");
    else 
        printf("found at position=%d ",s+1);
}
