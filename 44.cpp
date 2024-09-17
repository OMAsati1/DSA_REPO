#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for data: " << value << endl;
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(Node *&tail, Node *&head, int pos, int d)
{
    // insert at Start
    if (pos == 1)
    {
        insertAtHead(head, d);
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
        insertAtTail(tail, d);
        return;
    }
    // creating a node for d
    Node *nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;

    temp->next = nodeToInsert;
}
void print(Node *&head)
{
    Node *temp1 = head;

    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
    cout << endl;
}
void deleteNode(int pos, Node *&head, Node *&tail)
{
    if (pos == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if (curr->next == NULL)
        {
            tail = prev;
            // prev->next = NULL;
            // delete (curr);
            // return;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
bool isCircular(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == head)
    {
        return true;
    }
    return false;
}
bool isCycle(Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    map<Node *, bool> visited; // Create a map to store visited nodes

    Node *temp = head;
    while (temp != nullptr)
    {

        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}
Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *fast = head;
    Node *slow = head;
    while (fast != NULL && slow != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return slow;
        }
    }

    return NULL;
}
Node *startingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *ptOfInt = floydDetectLoop(head);
    Node *slow = head;
    while (slow != ptOfInt)
    {
        slow = slow->next;
        ptOfInt = ptOfInt->next;
    }
    return slow;
}
void removeLoop(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *startOfLoop = startingNode(head);
    if (startOfLoop == NULL)
        return;
    Node *temp = startOfLoop;
    while (temp != startOfLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    Node *node1 = new Node(6);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtTail(tail, 41);
    print(head);
    insertAtTail(tail, 31);
    print(head);
    insertAtTail(tail, 18);
    print(head);
    insertAtPosition(tail, head, 1, 22);
    print(head);
    insertAtPosition(tail, head, 6, 27);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    // insertAtHead(head, 23);
    // print(head);
    // insertAtHead(head, 17);
    // print(head);
    // insertAtHead(head, 34);
    // print(head);
    deleteNode(6, head, tail);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(5, head, tail);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    cout << endl;

    if (isCircular(tail))
    {
        cout << "This is a Circular Linklist" << endl;
    }
    else
    {
        cout << "This is a not a Circular Linklist" << endl;
    }
    tail->next = head->next;

    /* if (isCycle(head))
     {
         cout << "yes it has cycle" << endl;
     }
     else
     {
         cout << "does not have cycle" << endl;
     } */

    if (floydDetectLoop(head) != NULL)
    {
        cout << "yes it has cycle" << endl;
    }
    else
    {
        cout << "does not have cycle" << endl;
    }

    cout << "Cycle start from: " << startingNode(head)->data << endl;
    removeLoop(head);

    if (floydDetectLoop(head) != NULL)
    {
        cout << "yes it has cycle" << endl;
    }
    else
    {
        cout << "does not have cycle" << endl;
    }
    cout << "Cycle start from: " << startingNode(head)->data << endl;
    return 0;
}