#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class Queue {
private:
    Node *front;
    Node *rear;
    int count;

public:
    Queue() {
        front = NULL;
        rear = NULL;
        count = 0;
    }

    void enqueue(int data) {
        Node* temp = new Node(data);
        if (front == NULL) {
            front = temp;
        }
        else {
            rear->next = temp;
        }
        rear = temp;
        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout<< "Queue is already empty." << endl;
        }
        else {
            Node* temp = front;
            front = front->next;
            delete temp;
            count--;
        }
    }
    bool isEmpty() {
        return (front == NULL);
    }

    int top() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;

        }
        else {
            return front -> data;
        }
    }
    int size() {
        return count;
    }
};

int main() {
    Queue queue;
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);

    cout << "Queue size is: " << queue.size() << endl;
    cout << "Queue top is: "  << queue.top() << endl;

    queue.dequeue();
    queue.dequeue();

    return 0;
}
