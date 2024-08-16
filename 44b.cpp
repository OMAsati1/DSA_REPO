#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }

    return len;
}
void addAtHead(Node *&tail, Node *&head, int d)
{

    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void addAtTail(Node *&tail, Node *&head, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        Node *temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void addaAtPosition(Node *&tail, Node *&head, int pos, int d)
{
    if (pos == 1)
    {
        addAtHead(tail, head, d);
        return;
    }
    Node *temp = head;
    int cnt = 1;

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at Last Position
    if (temp->next == NULL)
    {
        addAtTail(tail, head, d);
        return;
    }

    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
void deleteNode(int position, Node *&head, Node *&tail)
{

    // deleting first or start node
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr->next == NULL)
        {
            curr->prev = NULL;
            tail = prev;
            prev->next = NULL;
            delete (curr);
            return;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;

        delete curr;
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = NULL;
    Node *tail = NULL;

    addAtHead(tail, head, 67);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;

    addAtTail(tail, head, 11);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;

    addAtTail(tail, head, 36);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;

    addaAtPosition(tail, head, 2, 76);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail" << tail->data << endl;

    addaAtPosition(tail, head, 1, 23);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    cout << "Lenght of list: " << getLength(head) << endl;

    addaAtPosition(tail, head, 6, 183);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;

    deleteNode(6, head, tail);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;
    return 0;
}