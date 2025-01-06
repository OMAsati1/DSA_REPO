/* #include<iostream>
#include<queue>
#include<deque>
#include<stack>
using namespace std;



int main(){
    queue<int> q;
    deque<int> a;
    stack<int> b;
    q.push(13);
    q.push(34);
    q.push(43);
      

    cout<<q.empty()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
   
    return 0;
} */
//...........................................................................................................

/* #include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    // Enqueue: Add element to the rear
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rear == nullptr) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    // Dequeue: Remove element from the front
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return;
        }
        Node* temp = front;
        front = front->next;

        // If the queue becomes empty
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
    }

    // Get the front element
    int getFront()  {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return -1;
        }
        return front->data;
    }

    // Check if the queue is empty
    bool isEmpty()  {
        return front == nullptr;
    }

    // Display the queue
    void display()  {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return;
        }
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue: ";
    q.display();

    cout << "Front element: " << q.getFront() << endl;

    q.dequeue();
    cout << "After dequeue, queue: ";
    q.display();

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    q.dequeue();
    q.dequeue();
    cout << "After dequeuing all elements, queue: ";
    q.display();

    return 0;
}
 */
//................................................................

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class CircularQueue {
private:
    Node* front;
    Node* rear;

public:
    CircularQueue() : front(nullptr), rear(nullptr) {}

    // Enqueue: Add an element to the rear
    void enqueue(int val) {
        Node* newNode = new Node(val);

        // If the queue is empty
        if (front == nullptr) {
            front = rear = newNode;
            rear->next = front; // Circular connection
        } else {
            rear->next = newNode;
            rear = newNode;
            rear->next = front; // Maintain circular connection
        }
    }

    // Dequeue: Remove an element from the front
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return;
        }

        // Single element in the queue
        if (front == rear) {
            delete front;
            front = rear = nullptr;
        } else {
            Node* temp = front;
            front = front->next;
            rear->next = front; // Maintain circular connection
            delete temp;
        }
    }

    // Get the front element
    int getFront() const {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return -1;
        }
        return front->data;
    }

    // Check if the queue is empty
    bool isEmpty() const {
        return front == nullptr;
    }

    // Display the queue
    void display() const {
        if (front == nullptr) {
            cout << "Queue is empty.\n";
            return;
        }

        Node* temp = front;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != front);
        cout << endl;
    }
};

int main() {
    CircularQueue cq;

    cq.enqueue(10);
    cq.enqueue(20);
    cq.enqueue(30);

    cout << "Queue: ";
    cq.display();

    cout << "Front element: " << cq.getFront() << endl;

    cq.dequeue();
    cout << "After dequeue, queue: ";
    cq.display();

    cq.dequeue();
    cq.dequeue();
    cout << "After dequeuing all elements, queue: ";
    cq.display();

    cout << "Is queue empty? " << (cq.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
