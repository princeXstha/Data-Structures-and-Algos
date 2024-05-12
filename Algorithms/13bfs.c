#include<stdio.h>
#define matrices 100
int adjm[matrices][matrices];
int visited[matrices];
int queue[matrices];
int front=0;
int rear=0;
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
void bfs(int i,int v){
    int j;
    for(j=0;j<v;j++){
        if(adjm[i][j]&&!visited[j]){
            visited[j]=1;
            queue[rear++]=j;
            printf(" %d",j);
        }
    }
    if(front<=rear){
        bfs(queue[front++],v);
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
    printf("%d",0);
    bfs(0,v);
    
}