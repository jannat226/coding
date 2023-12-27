#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *first;
void create(int A[], int n)
{
    struct node *t, *last;
    first->data = A[0];
    first->next = first->prev;
    first = last;
    for (int i = 1; i < n; i++)
    {
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}
int main()
{
    int A[] = {7, 8, 9};
    int n = 3;
    create(A, n);
    return 0;
}