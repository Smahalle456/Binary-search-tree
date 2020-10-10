#include"declaration.h"

int main()
{
struct BSTnode *root=NULL;
int choice,data;

while(1)
{

printf("\nEnter you choice\n\n");

printf("\n1-Insert the new node\n\n***Display the data using below method\n\n 2-Using Preorder\n "  "3-Using Inorder\n "  "4-Using postorder\n\n ");
scanf("%d", &choice);

switch(choice)
{

case 1: printf("Enter the data for new node\n\n");
	scanf("%d", &data);
	root=insert_node(root,data);
	break;
case 2:Preorder_display(root);
	break;
case 3:in_order_display(root);
	break;
case 4:Post_order_display(root);
	break;

default: break;
}
}

}		
