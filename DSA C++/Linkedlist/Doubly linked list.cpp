/**
 * C program to create and display Doubly linked list
 */

#include <stdio.h>
#include <stdlib.h>

/* 
 * Basic structure of Node
 */
struct node {
    int data;
    struct node * prev;
    struct node * next;
}*head, *last;


/*
 * Function used in this program 
 */
void createList(int n);
void displayListFromFirst();
void displayListFromEnd();


int main()
{
    int n, choice;

    head = NULL;
    last = NULL;
    
    printf("Enter the number of nodes you want to create: ");
    scanf("%d", &n);

    createList(n); // Create list of n nodes

    printf("\nPress 1 to display list from First");
    printf("\nPress 2 to display list from End : ");
    scanf("%d", &choice);

    if(choice==1)
    {
        displayListFromFirst();
    }
    else if(choice == 2)
    {
        displayListFromEnd();
    }

    return 0;
}


/**
 * Create a doubly linked list of n nodes.
 * @n Number of nodes to be created
 */
void createList(int n)
{
    int i, data;
    struct node *newNode;

    if(n >= 1)
    {
        head = (struct node *)malloc(sizeof(struct node));

        if(head != NULL)
        {
            printf("Enter data of 1 node: ");
            scanf("%d", &data);

            head->data = data;
            head->prev = NULL;
            head->next = NULL;

            last = head;

            /*
             * Create rest of the n-1 nodes
             */
            for(i=2; i<=n; i++)
            {
                newNode = (struct node *)malloc(sizeof(struct node));

                if(newNode != NULL)
                {
                    printf("Enter data of %d node: ", i);
                    scanf("%d", &data);

                    newNode->data = data;
                    newNode->prev = last; // Link new node with the previous node
                    newNode->next = NULL;

                    last->next = newNode; // Link previous node with the new node
                    last = newNode;          // Make new node as last/previous node
                }
                else
                {
                    printf("Unable to allocate memory.");
                    break;
                }
            }

            printf("\nDOUBLY LINKED LIST CREATED SUCCESSFULLY\n");
        }
        else
        {
            printf("Unable to allocate memory");
        }
    }
}


/**
 * Displays the content of the list from beginning to end
 */
void displayListFromFirst()
{
    struct node * temp;
    int n = 1;

    if(head == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp = head;
        printf("\n\nDATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of %d node = %d\n", n, temp->data);

            n++;
            
            /* Move the current pointer to next node */
            temp = temp->next;
        }
    }
}


/**
 * Display the content of the list from last to first
 */
void displayListFromEnd()
{
    struct node * temp;
    int n = 0;

    if(last == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        temp= last;
        printf("\n\nDATA IN THE LIST:\n");

        while(temp != NULL)
        {
            printf("DATA of last-%d node = %d\n", n, temp->data);

            n++;
            
            /* Move the current pointer to previous node */
            temp = temp->prev; 
        }
    }
}
