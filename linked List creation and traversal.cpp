#include <stdio.h>
#include <stdlib.h>
int main() {
    struct node{
        int data;
        struct node *next;
    };
    struct node *head,*new_node,*temp;
    head=0;
    int choice=1;
    while(choice!=0){
        new_node=(struct node *) malloc(sizeof(struct node));
        printf("\nEnter data: ");
        scanf("%d",&new_node->data);
        if(head==0){
            head=temp=new_node;
        }
        else{
            temp->next=new_node;
            temp=new_node;
            temp->next=0;
        }
        printf("Do you want to continue (0,1)");
        scanf("%d",&choice);
    }
    temp=head;
    printf("The list is:\n");
    while(temp!=0){
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    return 0;
}

