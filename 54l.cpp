// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// class Stack
// {
//     Node* top;
// public:
//      Stack() : top(nullptr){}

//     void push(int data) {
//         Node* newNode = new Node(); // Create a new node
//         newNode->data = data; // Set the data of the new node
//         newNode->next = top; // Make the new node point to the current top
//         top = newNode; // Update top to the new node
//     }
//      void pop() {
//         if (isEmpty()) {
//             cout << "Stack underflow! Cannot pop from an empty stack." << endl;
//             return;
//         }
//         Node* temp = top; // Store the top node temporarily
//         top = top->next; // Move top to the next node
//         delete temp; // Delete the old top node
//     }

//     // Function to get the top element of the stack
//     int peek() {
//         if (isEmpty()) {
//             cout << "Stack is empty! Cannot peek." << endl;
//             return -1; // Return an invalid value to indicate an empty stack
//         }
//         return top->data; // Return the data of the top node
//     }

//       bool isEmpty() {
//         return top == nullptr; // Stack is empty if top is nullptr
//     }
//      void display() {
//         if (isEmpty()) {
//             cout << "Stack is empty!" << endl;
//             return;
//         }
//         Node* temp = top;
//         while (temp != nullptr) {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

//     // Destructor to clean up the stack when it's no longer needed
//     ~Stack() {
//         while (!isEmpty()) {
//             pop(); // Pop all elements to free memory
//         }
//     }
// };
// int main()
// {
//    Stack stack;

//     stack.push(10);
//     stack.push(20);
//     stack.push(30);

//     cout << "Stack after pushes: ";
//     stack.display();

//     cout << "Top element: " << stack.peek() << endl;

//     stack.pop();
//     cout << "Stack after one pop: ";
//     stack.display();

//     cout << "Top element after pop: " << stack.peek() << endl;

//     stack.pop();
//     stack.pop();
//     stack.pop(); // Attempt to pop from an empty stack
//     return 0;
// }
//.......................Now push and pop from end...................................
#include <iostream>
using namespace std;

// Node structure for the linked list
struct Node
{
    int data;
    Node *next;
};

// Stack class using linked list
class Stack
{
private:
    Node *head; // Pointer to the head of the list (beginning)
    Node *tail; // Pointer to the tail of the list (end)

public:
    Stack() : head(nullptr), tail(nullptr) {} // Constructor initializes head and tail to nullptr

    // Function to push an element onto the stack (at the end)
    void push(int data)
    {
        Node *newNode = new Node(); // Create a new node
        newNode->data = data;
        newNode->next = nullptr; // New node's next is nullptr since it'll be the last node

        if (tail == nullptr)
        {                          // If the stack is empty
            head = tail = newNode; // Both head and tail point to the new node
        }
        else
        {
            tail->next = newNode; // Link the current tail to the new node
            tail = newNode;       // Update the tail to be the new node
        }
    }

    // Function to pop an element from the stack (from the end)
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow! Cannot pop from an empty stack." << endl;
            return;
        }

        if (head == tail)
        { // If there's only one node
            delete tail;
            head = tail = nullptr;
        }
        else
        {
            Node *temp = head;
            // Traverse to the second last node
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            delete tail;          // Delete the last node
            tail = temp;          // Update the tail to the second last node
            tail->next = nullptr; // Ensure tail is the last node
        }
    }

    // Function to get the top element of the stack (from the end)
    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty! Cannot peek." << endl;
            return -1; // Return an invalid value to indicate an empty stack
        }
        return tail->data; // Return the data of the tail node
    }

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return head == nullptr; // Stack is empty if head is nullptr
    }

    // Function to print the stack (for demonstration purposes)
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return;
        }
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to clean up the stack when it's no longer needed
    ~Stack()
    {
        while (!isEmpty())
        {
            pop(); // Pop all elements to free memory
        }
    }
};

int main()
{
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Stack after pushes: ";
    stack.display();

    cout << "Top element: " << stack.peek() << endl;

    stack.pop();
    cout << "Stack after one pop: ";
    stack.display();

    cout << "Top element after pop: " << stack.peek() << endl;

    stack.pop();
    stack.pop();
    stack.pop(); // Attempt to pop from an empty stack

    return 0;
}
