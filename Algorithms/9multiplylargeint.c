#include<stdio.h>
#include<math.h>
int ans;
int multiply(int x,int y,int n){
    int deno=pow(10,n/2);
    int a=x/deno;
    int b=x%deno;
    int c=y/deno;
    int d=y%deno;
    if(n/2!=1){
    int s0=multiply(a,c,n/2);
    int s1=multiply(b,d,n/2);
    int s2=multiply(a,d,n/2);
    int s3=multiply(b,c,n/2);
    ans= s0*pow(10,n) + (s2+s3)*pow(10,n/2)+s1; 
    }
    else
    ans= a*c*pow(10,n) + (a*d+b*c)*pow(10,n/2)+ b*d;
    return ans;
    
}
int main(){
    int n;
    int x,y;
    printf("enter no of digits");
    scanf("%d",&n);
     printf("enter first no");
    scanf("%d",&x);
     printf("enter second no");
    scanf("%d",&y);
       long int mul=multiply(x,y,n);
       printf("%ld",mul);
    
}