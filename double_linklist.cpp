 #include <iostream>

struct Node {
    int data;
    Node* next;
    Node* prev;
    
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class Solution {
public:

    Node* addNode(Node* head, int p, int x) {
    
        Node* newNode = new Node(x);

    
        Node* temp = head;
        for (int i = 0; i < p && temp != nullptr; i++) {
            temp = temp->next;
        }

        
        if (temp == nullptr) {
            return head;  
        }

     
        newNode->next = temp->next;  
        newNode->prev = temp; 

        if (temp->next != nullptr) {  
            temp->next->prev = newNode;
        }
        
        temp->next = newNode; 
        return head;  
    }

    
    void display(Node* head) {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data;
            if (temp->next != nullptr) std::cout << " <-> ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};


Node* addToEmpty(Node* head, int data) {
    Node* temp = new Node(data);
    head = temp;
    return head;
}

Node* addToEnd(Node* head, int data) {
    Node* temp = new Node(data);
    Node* ptr = head;
    while (ptr->next != nullptr) {
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
    return head;
}

int main() {
    Solution solution;
    
    Node* head = nullptr;
    head = addToEmpty(head, 2);
    head = addToEnd(head, 4);
    head = addToEnd(head, 5);

    std::cout << "Original List: ";
    solution.display(head);


    head = solution.addNode(head, 2, 6);

    std::cout << "Updated List: ";
    solution.display(head);

    return 0;
}
