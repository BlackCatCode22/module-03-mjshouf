#include <iostream>

struct Node {           // node structure for linked list
    int data;           // data of node
    Node* next;         // pointer to next node
};

class LinkedList {      // define a linked list class
private:
    Node* head;         // pointer to head of linked list

public:                 // public initialized to nullptr
    LinkedList() {
        head = nullptr;
    }

    void insert(int value) {        // insert new node at the end of list
        Node* newNode = new Node;   // create new node
        newNode->data = value;      // set data of new node
        newNode->next = nullptr;    // move to next pointer of new node to nullptr
        if (head == nullptr) {      // if list is empty, set new node as the head
            head = newNode;
        } else {                    // otherwise, insert new node at end
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void remove(int value) {        // function to remove node from list
        if (head == nullptr) {      // if list is empty, return
            return;
        }

        if (head->data == value) {  // if head is the node to be removed, update head
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* prev = head;          // otherwise, find the node to be removed
        Node* curr = head->next;

        while (curr != nullptr) {
            if (curr->data == value) {
                prev->next = curr->next;
                delete curr;
                return;
            }
            prev = curr;
            curr = curr->next;
        }
    }

    void display() {                // function to display the list 
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    LinkedList list;    // create a linked list object     

    list.insert(5);     // insert elements into list 
    list.insert(10);
    list.insert(15);
    list.display();     // display the list

    list.remove(10);    // remove element from list
    list.display();     // display the list

    return 0;
}
