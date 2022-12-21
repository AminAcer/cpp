#include <iostream>

struct Node 
{
    int data;
    Node* prev;
    Node* next;
};

//Node* initialize(int value)
//{
//    Node* head = new Node;
//    head->data = value;
//    head->prev = NULL;
//    head->next = NULL;
//
//    std::cout << head << std::endl;
//    std::cout << head->data << std::endl;
//    //std::cout << head->prev << std::endl;
//    return head;
//}
struct Node* head;

void initialize(int value)
{
    head->data = value;
    head->prev = nullptr;
    head->next = nullptr;
}

void frontInsert(int value)
{
    Node* temp = new Node;
    temp->data = value;
    temp->prev = nullptr;
    temp->next = head;

    head->prev = temp;
    head = temp;
}

void printList()
{
    
}

int main()
{
    //Node* head = initialize(100);
    //std::cout << head << std::endl;
    initialize(6);
    

    return 0;
}

// %value = address of value
// *value = actual value 