/*  Implementation of a Binary Search Tree  */

#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int info; // the information part
    struct Node* left_child; // pointer to left child 
    struct Node* right_child; // pointer to right child
}typedef Node;

struct Tree
{
    Node * root; // pointer to root node of the binary search Tree
}typedef Tree;

int search(Tree tree, int key)// iterative search 
{
    // searches for the presence of the element <key> in the Tree <tree>
    if( tree.root == NULL)// if tree is empty 
        return 0 ; // returns absense
    Node * temp= tree.root;
    while( temp != NULL)
    {
        if( key == temp->info)// match found
            return 1;
        if( key < temp->info) // key is smaller,look in left sub Tree
            temp = temp->left_child;
        else
            temp = temp->right_child;
    }//end while
    return 0; // element must be absent 
}//end of search
    

int insert( Tree* tree, int item)
{
    // inserts a new node containing the info <item> in the tree
    Node * newNode = (Node*)malloc(sizeof(Node));
    if( newNode == NULL) // insufficient memory in heap
        return 1; // return with failure code
        
    newNode->info = item; // add info in new Node 
    newNode->left_child=NULL; 
    newNode->right_child=NULL;// new node is inserted as a leaf Node 
    
    Node * temp = tree->root; // iterator set to root 
    Node * par ; //one level up iterator,always at the parent of temp
    while( temp!=NULL)
    {
        if( item < temp->info)
            {
                par = temp;// come down to temp
                temp = temp->left_child; // go left from here
                
            }
            else
            {
                par = temp;// come down to temp
                temp= temp->right_child;// go right from here
            }
    }//end of while
    
    if(tree->root == NULL ) // for empty tree
       {
           tree->root = newNode; // new node is the root
           return 0;
       }
    
    // temp is at NULL , new Node is to be inserted as a child of par 
    // identify new node should be left child or right child 
    if( item < par->info)// new node info is less than parent info
        par->left_child=newNode; // add as left child 
    else
        par->right_child=newNode; // add as right child
   
    return 0 ; //return with success code
}

void pre_order( Node * temp)
{
    if(temp!=NULL)
    {
    printf("%d ", temp->info);
    pre_order(temp->left_child);
    pre_order(temp->right_child);
    }
}

void in_order( Node * temp)
{
    if(temp!=NULL)
    {
    in_order(temp->left_child);
    printf("%d ", temp->info);
    in_order(temp->right_child);
    }
}

void post_order( Node * temp)
{
    if(temp!=NULL)
    {
    post_order(temp->left_child);
    post_order(temp->right_child);
    printf("%d ", temp->info);
    }
}
int count(Node *temp)
{ 
    if(temp==NULL)
        return 0;
    else
        return 1 + count(temp->left_child)+count(temp->right_child);
}//end of count

int main()
{
    Tree t;
    t.root=NULL;
    //node insertions
    insert(&t, 30);
    insert(&t, 40);
    insert(&t, 10);
    insert(&t, 20);
    insert(&t, 90);
    insert(&t, 50);
    insert(&t, 60);
    insert(&t, 80);
    insert(&t, 70);
    printf("\n Pre-order Traversal : ");
    pre_order(t.root);
    printf("\n In-Order Traversal : ");
    in_order(t.root);
    printf("\n Post-Order Traversal : ");
    post_order(t.root);
    
    printf("\n Search Result of 50 is %d ", search(t,50));
    printf("\n Search Result of 88 is %d ", search(t,88));
    printf("\n Search Result of 30 is %d ", search(t,30));
    printf("\n Search Result of 10 is %d ", search(t,10));
    
    printf("\n Count of Nodes in the tree is %d ", count(t.root));
   
}//end of main
    

          
