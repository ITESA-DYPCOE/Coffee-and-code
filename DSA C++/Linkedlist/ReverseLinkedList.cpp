// Reverse Linked List

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *newNode(int data)
{
    Node *new_node = new Node;
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

void push(Node **head_ref, int new_data)
{
    Node *new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

Node *reverseLinkedList(Node *A)
{
    Node *curr, *prev, *next;
    curr = A;
    prev = NULL;
    next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    curr = prev;

    return curr;
}

void displayList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    push(&head, 3);
    push(&head, 6);
    push(&head, 8);

    cout << "Before reversing: " << endl;
    displayList(head);

    head = reverseLinkedList(head);

    cout << "After reversing: " << endl;
    displayList(head);
}
