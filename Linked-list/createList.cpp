#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void createList(Node *&head, int val)
{
    Node *node = new Node(val);
    if (head == NULL)
    {
        head = node;
    }
    else
    {
        Node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = node;
    }
}

void display(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout<<"NULL";
}

int main()
{
    Node *head = NULL;
    int n;
    do
    {
        cout << "Enter value of node\n";
        int num;
        cin >> num;
        createList(head, num);
        cout << "Enter -1 to stop create list otherwise 1\n";

        cin >> n;
        if(n==-1){
            break;
        }

    } while (n);

    display(head);

    return 0;
}