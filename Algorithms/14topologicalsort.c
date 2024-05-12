#include<stdio.h>
#define matrices 100
int adjm[matrices][matrices];
int visited[matrices];
int stack[matrices];
int top=-1;
void initmatrix(int v){
    int i,j;
    for(i=0;i<v;++i){
        visited[i]=0;
        for(j=0;j<v;++j){
            adjm[v][v]=0;
        }
    }
}
void makematrix(int e1,int e2){
    adjm[e1][e2]=1;
}
void dfs(int i,int v){
    visited[i]=1;
    for(int j=0;j<v;++j){
        if(adjm[i][j]==1 && !visited[j]){
            dfs(j,v);
        }
    }
    stack[++top]=i;
}
void topologicalsort(int v){
    for(int i=0;i<v;++i){
        if(!visited[i]){
            dfs(i,v);
        }
    }
    while(top>=0){
        printf(" %d",stack[top--]);
    }
}
int main(){
    int e,v;
    int e1,e2;
    printf("enter number of vertices");
    scanf("%d",&v);
    printf("enter number of edges");
    scanf("%d",&e);
    initmatrix(v);
    for(int i=0;i<e;i++){
    printf("enter the edges(e1,e2)");
    scanf("%d%d",&e1,&e2);
    makematrix(e1,e2);
    }
    topologicalsort(v);
    
}