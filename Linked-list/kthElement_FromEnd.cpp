#include <iostream>
using namespace std;

// Create a node
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

// Inserting at Head
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

// Inserting at Tail
void insertAtTail(node *&head, int val)
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

// Inserting after a given node
void insertAfterNode(node *&head, int val, int key)
{
    node *n = new node(val);
    node *temp = head;
    while (temp->data != key)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}

// Inserting before a given node
void insertBeforeNode(node *&head, int val, int key)
{
    node *n = new node(val);
    node *temp = head;
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    n->next = temp->next;
    temp->next = n;
}

// Deleting at Head
void deleteAtHead(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    node *todelete = head;
    head = head->next;
    delete todelete;
}

// Deteting at Tail
void deleteAtTail(node *&head)
{
    node *todelete;
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    todelete = temp->next;
    temp->next = NULL;
    delete todelete;
}

// Display linked list
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

// size of linked list

void size(node *head)
{
    int n = 0;
    node *ptr = head;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        n++;
    }
    cout << "Size of list : "<<n << endl;
}

// Kth element from end of linked list without using size function..
// For using size function while(n<size-k) iteration
void kthElement(node* head, int k){
    node* slow = head;          // slow pointer
    node* fast = head;          // fast pionter

    // Initially create required distance between slow and fast
    for(int i=0; i<k; i++){
        fast = fast->next;
    }

    while(fast->next != NULL){
        slow= slow->next;
        fast = fast->next;
    }
 
    cout<<k<<"th element form last : "<<slow->data<<"\n";
}
int main()
{
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    size(head);
    kthElement(head,2);
    insertAtHead(head, 0);
    display(head);
    insertAfterNode(head, 30, 3);
    insertBeforeNode(head, 10, 2);
    insertAtTail(head, 5);
    display(head);
    size(head);
    kthElement(head,6);
    display(head);
    deleteAtHead(head);
    deleteAtTail(head);
    display(head);
    size(head);
    kthElement(head,4);


    return 0;
}
