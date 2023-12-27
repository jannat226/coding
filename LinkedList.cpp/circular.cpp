#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *head;
void create(int arr[], int n)
{
    head->data = arr[0];
    struct node *last;
    head->next = NULL;
    last = new node;
    last = head;
    for (int i = 1; i < n; i++)
    {
        struct node *t;
        t = new node;
        t->data = arr[i];
        t->next = head;
        last->next = t;
        last = t;
    }
}

int display(struct node *p)
{
    cout << "the data in the linked list is" << endl;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head); // Loop until we reach the head again
    return 0;
}
int main()
{
    head = new node;
    int a[] = {1, 2, 3, 4};
    create(a, 4);
    display(head);
    return 0;
}