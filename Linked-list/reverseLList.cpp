#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertAthead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void insertAttail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}


// Reverse linled list using pointer
node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *current = head;
    node *nextptr;
    while (current != NULL)
    {
        nextptr = current->next;
        current->next = prevptr;

        prevptr = current;
        current = nextptr;
    }
    return prevptr;
}


//Reverse linked list using recursion
node *reverserecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = reverserecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

int main()
{
    node *head = NULL;
    insertAttail(head, 9);
    insertAttail(head, 8);
    insertAttail(head, 7);
    insertAttail(head, 6);
    insertAttail(head, 5);
    display(head);
    // node* newhead = reverse(head);
    // display(newhead);
    node *newhead = reverserecursive(head);
    display(newhead);
    return 0;
}