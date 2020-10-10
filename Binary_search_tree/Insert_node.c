#include"declaration.h"

struct BSTnode* insert_node(struct BSTnode *root,int data)
{

struct BSTnode *nu=NULL;

nu=calloc(1,sizeof(struct BSTnode));
nu->data=data;


if(root==NULL){ 
root=nu; 
}
else if((nu->data) < (root->data))
{
root->left=insert_node(root->left,data);
}
else {
root->right=insert_node(root->right,data);
}

return root;

}


