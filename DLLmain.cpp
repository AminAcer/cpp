#include <iostream>
#include <DLLmain.h>

namespace fucklucas
{
    class Node 
    {
        Node* head;

        public:
            void Node::printList();
            void Node::frontInsert(int value);

            int data;
            Node* prev;
            Node* next;
    };
}


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

//void initialize(int value)
//{
//    head->data = value;
//    head->prev = nullptr;
//    head->next = nullptr;
//}

//int main()
//{
    //Node* head = initialize(100);
    //std::cout << head << std::endl;
    //head = new Node;
    //std::cout << head << std::endl;
    //frontInsert(10);
    //frontInsert(100);
    //frontInsert(2);
    //frontInsert(34);
    //frontInsert(23);
    //frontInsert(15);
    //frontInsert(353);
    //frontInsert(45);
    //frontInsert(246);
    //frontInsert(343);
    //printList();

//    return 0;
//}

// %value = address of value
// *value = actual value 

// Make struct into class inside namespace
// New file with new namespace with new class and use the other class
