#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
    int bf;
}*root;
struct node *createnode(int value){
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    temp->data=value;
    temp->left=NULL;
    temp->right=NULL;
}
struct node *insertnode(struct node *node,int value){
    if(node==NULL)
        node=createnode(value);
    else if(value>node->data){
        node->right=insertnode(node->right,value);
    }
    else{
        node->left=insertnode(node->left,value);
    }
    return node;
}
void inorder(struct node *node){
    if(node==NULL)
        return;
    else{
        int h=height(root);
    inorder(node->left);
    printf(" %d   ",node->data);
    printf("%d",node->bf);
    printf("\n");
    inorder(node->right);
    }
}
void preorder(struct node *node){
    if(node==NULL)
        return;
    else{
    printf(" %d",node->data);
    preorder(node->left);
    preorder(node->right);
    }
}
void postorder(struct node *node){
    if(node==NULL)
        return;
    else{
    postorder(node->left);
    postorder(node->right);
    printf(" %d",node->data);
    }
}
int height(struct node *node){
    int lh,rh;
    if(node==NULL){
        return;
    }
    else{
        lh=height(node->left);
        rh=height(node->right);
        node->bf=lh-rh;
        return(1+max(lh,rh));
    }
}
int max(int lh,int rh){
    int r;
    r=(lh>rh)?lh:rh;
    return r;
}

int main(){
    int value,ch=1;
    while(ch==1){
    printf("enter the value to insert in tree\n");
  scanf("%d",&value);
    root=insertnode(root,value);
    printf("\n do you want to insert more?(1 for y/0 for no)");
    scanf("%d",&ch);
    }
    printf("\n INORDER TRAVERSAL and BALANCING FACTOR\n");
    inorder(root);
    printf("\n PREORDER TRAVERSAL \n");
    preorder(root);
    printf("\n POST ORDER\n");
    postorder(root);
    printf("\nHEIGHT OF THE TREE\n");
    printf("height=%d ",height(root)-1);
}