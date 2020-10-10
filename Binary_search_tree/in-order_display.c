#include"declaration.h"

void in_order_display(struct BSTnode *root)
{

if(root==NULL)
{printf("\nlist is empty\n");
return;}

in_order_display(root->left);
printf("%d",root->data);
in_order_display(root->right);
}


