// problem Name : Insert at mid position in the list
#include <iostream>
struct Node
{
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};
void insertAtMid(Node *&root, int x, int pos)
{
    Node *temp = new Node(x);
    Node *curr = root;
    // another for loop use in cpp
    for (int i = 0; i < pos - 1; i++)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
}
int main()
{
    Node *root = new Node(10);
    root->next = new Node(20);
    root->next->next = new Node(30);

    insertAtMid(root, 0, 2);
    while (root != nullptr)
    {
        std::cout << root->data << " ";
        root = root->next;
    }

    return 0;
}