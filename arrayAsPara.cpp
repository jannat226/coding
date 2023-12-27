#include <iostream>
using namespace std;

void func(int A[])
{
    cout << sizeof(A) / sizeof(int) << endl; // here A is the pointer , so size of A is 8 bytes and size of int is 4 bytes

    for (int i = 1; i < 5; i++)
    {
        A[i] += 1;
        cout << A[i] << endl;
    }
}

int *fun(int size)
{
    int *p;
    p = new int[size]; // creating a array in the heap memory
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 10 + 1;
    }
    return p;
}

int main()
{
    int *ptr;
    int size = 5;
    ptr = fun(size);

    int A[5] = {1, 2, 3, 4, 5};

    func(A);
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << endl;
    } // for each loop on array

    cout << sizeof(A) / sizeof(int) << endl;
    return 0;
}