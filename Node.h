namespace Nodeclass
{
    class Node 
    {
        public:
            Node* head;
            int data;
            Node* prev;
            Node* next;

            void printList();
            void frontInsert(int value);
    };
}