#include<stdio.h>
int binarysearch(int arr[],int ele,int l,int r){
    if(l>r){
        return -1;
    }
    else{
        int mid=(l+r)/2;
        if(ele==arr[mid])
            return mid;
        else if(ele>arr[mid])
            binarysearch(arr,ele,mid+1,r);
        else
            binarysearch(arr,ele,l,mid-1);
    }
    return 0;
}
int main(){
    int arr[7]={1,3,5,7,9,10,12};
    int ele;
    printf("enter the element to search");
    scanf("%d",&ele);
    int l=0;
    int r=6;
    int s=binarysearch(arr,ele,l,r);
    if(s==-1)
        printf("not found");
    else
        printf("found at position= %d",s+1);
}