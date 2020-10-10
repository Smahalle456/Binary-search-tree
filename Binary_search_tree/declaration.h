#include<stdio.h>
#include<stdlib.h>

struct BSTnode{

int data;
struct BSTnode *left;
struct BSTnode *right;

};

struct BSTnode* insert_node(struct BSTnode *root,int data);
struct BSTnode* get_node(struct BSTnode);
void Preorder_display(struct BSTnode *root);
void in_order_display(struct BSTnode *root);
void Post_order_display(struct BSTnode *root);
