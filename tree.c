#include<stdio.h>
#include<malloc.h>
#include<math.h>
struct tree
{
    int data;
    struct tree *left,*right;

}*p,*peak;


void Node(struct tree *p,int a,int b)
{
p->left->data=a;
p->right->data=b;
}

int main(void)
{//建立首节点
    //假设有一个数组a
    int a[]={1,2,3,4,5,6};
    int depth=log2(6)+1;//二叉树的深度
    int j;
    p=(struct tree *)malloc(sizeof(struct tree));
    peak =p;
    p->data=a[0];
    




    return 0;
}