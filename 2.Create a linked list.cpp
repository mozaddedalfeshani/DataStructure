// Muradian Code
#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x) : data(x), next(NULL) {}
};
int main()
{
    Node *root = new Node(10);
    root->next = new Node(20);
    root->next->next = new Node(30);

    // display all the value

    while (root != nullptr)
    {
        cout << root->data << " ";
        root = root->next;
    }

    return 0;
}