#include<stdio.h>
#include<string.h>
int main(){
    int flag=0;
    char text[]="prince is good boy";
    char pat[]="good";
    int m=strlen(text);
    int n=strlen(pat);
    printf("%d",m);
    int i,j;
    for(i=0;i<=(m-n);i++){
        j=0;
        while(text[i+j]==pat[j] && j<n){
            j++;
            if(j==n){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        printf("found");
    }
    else{
        printf("not found");
    }
}
