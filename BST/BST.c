/* 
 * C Program to Construct a Binary Search Tree and perform deletion, inorder traversal on it
 */ 
#include <stdio.h>
#include <stdlib.h>
 
struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1;
 
//void delete1();
void insert();
//void delete();
void inorder(struct btnode *t);
void create();
void search(struct btnode *t);
void preorder(struct btnode *t);
void postorder(struct btnode *t);

struct btnode *minValueNode(struct btnode *node);
struct btnode *deleteNode(struct btnode *root, int key) ;
 
 
void main()
{
    int ch,key;
 
    printf("\nOPERATIONS ---");
    printf("\n1 - Insert an element into tree\n");
    printf("2 - Delete an element from the tree\n");
    printf("3 - Inorder Traversal\n");
    printf("4 - Preorder Traversal\n");
    printf("5 - Postorder Traversal\n");
    printf("6 - Exit\n");
    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:    
            insert();
            break;
        case 2:   
            printf("Enter the data to be deleted : ");
            scanf("%d", &key); 
            deleteNode(root,key);
            break;
        case 3:    
            inorder(root);
            break;
        case 4:    
            preorder(root);
            break;
        case 5:    
            postorder(root);
            break;
        case 6:    
            exit(0);
        default :     
            printf("Wrong choice, Please enter correct choice  ");
            break;    
        }
    }
}
 
/* To insert a node in the tree */
void insert()
{
    create();
    if (root == NULL) 
        root = temp;
    else    
        search(root);    
}
 
/* To create a node */
void create()
{
    int data;
 
    printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    temp = (struct btnode *)malloc(sizeof(struct btnode));
    temp->value = data;
    temp->l = temp->r = NULL;
}
 
/* Function to search the appropriate position to insert the new node */
void search(struct btnode *t)
{
    if ((temp->value > t->value) && (t->r != NULL))      /* value more than root node value insert at right */
        search(t->r);
    else if ((temp->value > t->value) && (t->r == NULL))
        t->r = temp;
    else if ((temp->value < t->value) && (t->l != NULL))    /* value less than root node value insert at left */
        search(t->l);
    else if ((temp->value < t->value) && (t->l == NULL))
        t->l = temp;
}
 
/* recursive function to perform inorder traversal of tree */
void inorder(struct btnode *root)
{
    if(root!=NULL)
    {
        //traverse left
        inorder(root->l);
        //traverse root
        printf("%d->",root->value);
        //traverse right
        inorder(root->r);
    }
}

void preorder(struct btnode *root)
{
    if(root!=NULL)
    {
        printf("%d->",root->value);
        preorder(root->l);
        preorder(root->r);
    }
}

void postorder(struct btnode *root)
{
    if(root!=NULL)
    {
        
        postorder(root->l);
        postorder(root->r);
        printf("%d->",root->value);
    }
}

    


// Find the inorder successor
struct btnode *minValueNode(struct btnode *node) {
  struct btnode *current = node;

  // Find the leftmost leaf
  while (current && current->l != NULL)
    current = current->l;

  return current;
}

// Deleting a node
struct btnode *deleteNode(struct btnode *root, int key) 
{// Return if the tree is empty
      if (root == NULL)
    {
        printf("No elements in a tree to delete");
        return root;
    }
    // Find the node to be deleted
  if (key < root->value)
    root->l = deleteNode(root->l, key);
  else if (key > root->value)
    root->r = deleteNode(root->r, key);

else {
    // If the node is with only one child or no child
    if (root->l == NULL) {
      struct btnode *temp = root->r;
      free(root);
      return temp;
    } else if (root->r == NULL) {
      struct btnode *temp = root->l;
      free(root);
      return temp;
    }
    
// If the node has two children
    struct btnode *temp = minValueNode(root->r);

    // Place the inorder successor in position of the node to be deleted
    root->value = temp->value;

    // Delete the inorder successor
    root->r = deleteNode(root->r, temp->value);
  }
  return root;
}