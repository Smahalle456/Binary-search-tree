#include"declaration.h"

void Preorder_display(struct BSTnode *root)
{
if(root==NULL){
//printf("list is empty\n"); 
return;}

printf("%d\n",root->data);

Preorder_display(root->left);
Preorder_display(root->right);



}
