#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

// Traversal Function
void display(Node* p){
    while(p != nullptr){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int main(){

    // Creating nodes manually
    Node*first = new Node;
    Node*second = new Node;
    Node*third = new Node;
    Node*fourth = new Node;

    // Assigning the values
    first -> data = 34;
    second -> data = 45;
    third -> data = 55;
    fourth -> data = 43;

    // linking the nodes
    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = nullptr; // last node 

    // Traversing and displaying the list
    display(first);

}

