// problem name :   Insert at beginning in the list
// solution by  :   Murad
#include <iostream>
struct Node
{
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};
void insertAtBeginning(Node *&root, int x) // *& means reference to pointer
{
    Node *temp = new Node(x);
    temp->next = root;
    root = temp;
}

int main()
{

    Node *root = new Node(10);
    root->next = new Node(20);
    root->next->next = new Node(30);
    insertAtBeginning(root, 0);
    while (root != nullptr)
    {
        std::cout << root->data << " ";
        root = root->next;
    }

    return 0;
}