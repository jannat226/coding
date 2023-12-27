#include <iostream>
using namespace std;
struct stack
{
    int size;
    int top = -1;
    int *s;
};
void push(stack *st, int x)
{
    // int p = -1;
    // if (st->top == -1)
    // {
    //     st->s(s)
    // }
}
void pop(stack st)
{
}
void peek(stack *st, int x)
{
}
int main()
{
    stack st;

    cout << "enter the size of array" << endl;
    cin >> st.size;

    int choice;
    cout << "choose your choice from the menu \n 1. Push \n 2.Pop \n3.Peek" << endl;
    switch (choice)
    {
    case 1:
        int x;
        cin >> x;
        cout << "enter the value you want to push in stack ";
        push(&st, x);
    case 2:
        pop(st);
    case 3:
        int x;
        cin >> x;
        cout << "enter the index whose you want to see ";

        peek(&st, x);
    default:
        cout << "Invalid choice";
    }

    return 0;
}