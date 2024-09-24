#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
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

    void insert_at_end(int value) {
        Node* new_node = new Node(value);

     
        if (head == nullptr) {
            head = new_node;
            return;
        }


        Node* last = head;
        while (last->next != nullptr) {
            last = last->next;
        }

 
        last->next = new_node;
    }

   
    void print_list() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {

    LinkedList ll;


    ll.insert_at_end(10);
    ll.insert_at_end(20);
    ll.insert_at_end(30);

    ll.print_list();

    return 0;
}