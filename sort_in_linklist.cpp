#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;


    Node(int val) {
        data = val;
        next = nullptr;
    }
};
class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void append(int data) {
        Node* new_node = new Node(data);
        if (!head) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void swap(Node* a, Node* b) {
        int temp = a->data;
        a->data = b->data;
        b->data = temp;
    }

    
    void bubbleSort() {
        if (!head) return;

        bool swapped;
        Node* ptr1;
        Node* lptr = nullptr;

        do {
            swapped = false;
            ptr1 = head;

            while (ptr1->next != lptr) {
                if (ptr1->data > ptr1->next->data) {
                    swap(ptr1, ptr1->next);
                    swapped = true;
                }
                ptr1 = ptr1->next;
            }
            lptr = ptr1;
        } while (swapped);
    }
};

int main() {
    LinkedList ll;
    ll.append(64);
    ll.append(34);
    ll.append(25);
    ll.append(12);
    ll.append(22);
    ll.append(11);
    ll.append(90);

    cout << "Linked List before sorting: ";
    ll.printList();

    ll.bubbleSort();

    cout << "Linked List after sorting: ";
    ll.printList();

    return 0;
}