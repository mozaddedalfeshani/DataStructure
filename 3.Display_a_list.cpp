// problem name : Display a list
#include <iostream>
struct Node
{
    int data;
    Node *next;
    Node(int x) : data(x), next(nullptr) {}
};
void displayList(Node *root)
{
    while (root != nullptr)
    {
        std::cout << root->data << " ";
        root = root->next;
    }
}
int main()
{
    // 10  20 30 40 50
    Node *root = new Node(10);
    root->next = new Node(20);
    root->next->next = new Node(30);
    root->next->next->next = new Node(40);
    root->next->next->next->next = new Node(50);
    displayList(root);
    return 0;
}