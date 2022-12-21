
namespace fucklucas
{
    void Node::frontInsert(int value)
    {
        Node* temp = new Node;
        temp->data = value;
        temp->prev = nullptr;
        temp->next = head;
        head->prev = temp;
        head = temp;
    }

    void Node::printList()
    {
        Node* temp;
        temp = head;
        while(temp->next != nullptr)
        {
            std::cout << temp->data << std::endl;
            temp = temp->next;
        }
    }
}


