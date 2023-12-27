#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *first;

void create(int arr[], int n)
{
    first->data = arr[0];
    struct node *last;
    first->next = NULL;
    last = new node;
    last = first;
    for (int i = 1; i < n; i++)
    {
        struct node *t;
        t = new node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
// void create(int arr[], int n)
// {
//     first = new node; // Allocate memory for the first node
//     first->data = arr[0];
//     first->next = nullptr;

//     struct node *last = first; // Set last to the first node

//     for (int i = 1; i < n; i++)
//     {
//         struct node *t = new node; // Allocate memory for a new node
//         t->data = arr[i];
//         t->next = nullptr;
//         last->next = t;
//         last = t;
//     }
// }
int display(struct node *p)
{
    cout << "the data in the linked list is" << endl;
    while (p != NULL)
    {
        cout << p->data;
        p = p->next;
    }
    return 0;
}
void deleteNode(int key)
{
    struct node *current = first;
    struct node *previous = nullptr;

    // If the node to be deleted is the first node
    if (current != NULL && current->data == key)
    {
        first = current->next;
        delete current;
        return;
    }

    // Search for the node to be deleted
    while (current != NULL && current->data != key)
    {
        previous = current;
        current = current->next;
    }

    // If the node with the given key is not present
    if (current == NULL)
    {
        cout << "Node with key " << key << " not found." << endl;
        return;
    }

    // Unlink the node from the linked list
    previous->next = current->next;
    delete current;
}
int main()
{
    first = new node;
    int a[] = {1, 2, 3, 4};
    create(a, 4);
    display(first);
    int keyToDelete = 3;
    deleteNode(keyToDelete);
    return 0;
}