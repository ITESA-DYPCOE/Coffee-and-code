/*  Implementation of a Doubly Linked List with standard interface methods*/
/*    Interrface methods implemented are : 
    insert_begin : Inserts a Node at the beginning of List 
    delete_begin:  Deletes the First Node of list and returns the contents
    display_list:  Prints the information contained in the Nodes sequentially 
*/    

#include<stdio.h>
#include<stdlib.h> // for malloc 

struct Node
{
    int info; //the information part of a Node 
    struct Node* next; // points to the next Node
    struct Node* prev; // points to the previous Node
} typedef Node;


struct List
{
    Node *start ; // pointer to the first Node of the list
}typedef List;


int insert_begin( List* list, int item)
{
    Node * newNode =(Node*)malloc(sizeof(Node));// allocate memory for newnode
    if( newNode == NULL)
         return 1; // failure to insert node because of insufficient memory
     
     newNode->info = item ; // add data in the newNode
     if( list->start == NULL)// if the list is Empty
       {
           newNode->next = NULL;
           newNode->prev = NULL;
           list->start = newNode;
           return 0;
       }  
    else 
    {
         // Atleast one node in list
        newNode->next = list->start;
        newNode->prev = NULL;
        list->start->prev = newNode;
        list->start = newNode;// newNode is now the first node, update start 
         return 0;// successful insertion of node 
    }
}//end of insert_begin

int insert_end( List* list, int item)
{
    Node * newNode =(Node*)malloc(sizeof(Node));// allocate memory for newnode
    if( newNode == NULL)
         return 1; // failure to insert node because of insufficient memory
     
    newNode->info = item ; // add data in the newNode
    if( list->start == NULL)// if list is empty
    {
        // new Node will be the first Node of list
        newNode->next = NULL;
        newNode->prev = NULL;
        list->start = newNode;
        return 0; 
    }
    else // more than one node in list
    {
        Node * temp= list->start;
        while( temp->next != NULL)// iterate
            temp = temp->next;
      temp->next = newNode;
      newNode->prev=temp;
      newNode->next= NULL;
      return 0;
    }
}//end of insert_begin


int delete_begin( List *list)// list is passed by reference 
{
    if(list->start == NULL)// list is empty
        return -1;
    if( list->start->next == NULL)// only one node in list
    {
        int front_element = list->start->info;// store the info of 1st node
        Node *save = list->start;// save the address of the first node
        list->start = list->start->next;// update start 
        free(save);// release the memory of the node to be deleted 
        return front_element;// return the first element 
    }
     // more than one node in list
        int front_element = list->start->info;// store the info of 1st node
        Node *save = list->start;// save the address of the first node
        list->start->next->prev = NULL; // 2nd Node will now become the 1st NULL
        list->start = list->start->next;// update start 
        free(save);// release the memory of the node to be deleted 
        return front_element;// return the first element 
}//end of list

int delete_end( List *list)// list is passed by reference 
{
    if(list->start == NULL)// list is empty
        return -1;
    if( list->start->next == NULL)// only one node in list
    {
        int front_element = list->start->info;// store the info of 1st node
        Node *save = list->start;// save the address of the first node
        list->start = list->start->next;// update start 
        free(save);// release the memory of the node to be deleted 
        return front_element;// return the first element 
    }
     // more than one node in list
     Node* temp;
     temp=list->start;
     while(list->start->next->next!=NULL){
          temp=temp->next;
     }
     int front_element = temp->next->info;// store the info of last node
     Node *save = temp->next;// save the address of the last
     temp->next = NULL;
     temp->prev = temp; 
     free(save);
     return front_element;
}//end of list

void display_list(List list) 
{
    if(list.start == NULL) // No nodes in the list
    {
        printf("\nEmpty List\n");
        return -1;
    }
    printf("\n List is : ");
    Node *temp = list.start;// initialize an iterator with start
    while( temp != NULL ) // iterate over all the nodes of the list
    {
        printf("%5d", temp->info); // print the info part of the current node
        temp = temp->next;
    }//end of while
    
}//end of display_list
   
   
void reverse_iteration(List list)
{
    printf("\n Reversed List is ");
    if( list.start == NULL)
        {
            printf("\nEmpty List ");
            return ;
        }
        
    Node *temp = list.start;
    while(temp->next != NULL) 
        temp=temp->next;
         
    while( temp != NULL)        
        {
            printf(" %d ", temp->info);
            temp = temp->prev;
        }      
}

int insert_at( List* list , int n, int item)
{
    
  Node *newNode = (Node*)malloc(sizeof(Node));
  //check for memory
  if(newNode==NULL)
    return 1; 
 newNode->info = item;
 //check for empty List
   if( list->start == NULL)
   {
       // add the new node as the first node 
       newNode->prev=NULL;
       newNode->next = NULL;
       list->start = newNode;
       return 0; // successful insertion
   }
   
   if( n==1) // new node to be inserted at the 1st Position
   {
       // insert the new at the beginning
       newNode->next = list->start; // newNode is going to be the 1st node
       newNode->prev = NULL;
       list->start->prev = newNode;
       list->start = newNode ; // update start
       return 0;
   }
   
   Node * temp , *preceding;// iterators to reach upto the desired location
   int position=1;// node count
   
   temp = list->start;
   while( position < n && temp!=NULL)
   // until we reach to the desired location or the list is insufficent in size
   {
      preceding = temp;
      temp=temp->next;// both iterators move forward 
      position++;// track node count
   }
   // add the new node at a position after preceding,
   // temp may be NULL
    newNode->prev = preceding;
    newNode->next = temp;
    preceding->next = newNode;
    if( temp != NULL)
        temp->prev = newNode;
    return 0;
}//end of insert_at
    

int delete_at(List* list,int n){
    if(list->start==NULL)
        printf("List is empty");
    if( list->start->next == NULL)// only one node in list
    {
        int front_element = list->start->info;// store the info of 1st node
        Node *save = list->start;// save the address of the first node
        list->start = list->start->next;// update start 
        free(save);// release the memory of the node to be deleted 
        return front_element;// return the first element 
    }
    if(n==1) // new node to be deleted from the 1st Position
    {
        // delete the first node
        Node *save=list->start;
        list->start->next->prev=NULL;
        list->start=list->start->next;
        free(save);
    }
    Node *preceding,*temp;
    int count=1;
    while(count<n && temp->next!=NULL){     
        preceding=temp;             //preceding equals to temp
        temp=temp->next;            //iterate temp
        count++;
    }
    // delete the new node at a position after preceding,
    // temp may be NULL
    Node *save;
    save=temp;                      //save the node at temp
    int front_element = temp->info; //capture the info
    preceding->next=temp->next;     //update preceding
    if(temp!=NULL)
        temp->next->prev=preceding;     //update next value after temp
    free(save);
    return front_element;
}
    
void main()
{
    List l;
    l.start = NULL;
    display_list(l); // Empty List
    insert_begin(&l, 100); // start -> 100
    insert_begin(&l, 200); // start -> 200 -> 100
    display_list(l); //  200 100
    reverse_iteration(l);// 100 2000

    insert_end(&l, 400); // start -> 200->100->400
    insert_end(&l, 500); // start -> 200 -> 100->400->500
    display_list(l); //  200 100 400 500
    
    reverse_iteration(l); // 500 400 100 200 
    
    printf("\n Deleted Element from First = %d ",delete_begin(&l));// 200
    display_list(l); //  400 100 200
    
    printf("\n Deleted Element from First = %d ",delete_begin(&l));// 400
    display_list(l); //  100 200
    
    printf("\n Deleted Element from last = %d ",delete_end(&l));// 400
    display_list(l); 
    
}   //end of main





