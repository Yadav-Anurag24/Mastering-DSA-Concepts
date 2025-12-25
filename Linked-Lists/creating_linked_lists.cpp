#include<iostream>
using namespace std;

struct Node{
    int data; // data part
    Node* next; // pointer to the next node
};

int main(){
    Node* p = new Node; // Creating a node.

    // Assigning values.
    p->data = 12;
    p->next = nullptr;

    // Accessing the values:
    cout << "Data: " << p->data << endl;
    cout << "Next: " << p->next << endl;

    
    return 0;
}