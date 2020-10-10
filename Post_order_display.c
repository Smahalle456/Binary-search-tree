#include"declaration.h"

void Post_order_display(struct BSTnode *root)
{


if(root==NULL){ 
printf("List is empty\n");
return;
}

Post_order_display(root->left);
printf("%d",root->data);

Post_order_display(root->right);

return;


}
