#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
};
void Display(struct Array arr) // displaying the array
{
    for (int i = 0; i < arr.size; i++)
    {
        cout << arr.A[i];
    }
}
void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->size)
    {
        arr->A[i] = arr->A[i];
        arr->size;
        arr->size++;
    }
}
int main()
{
    struct Array arr;
    cout << "Enter the size of array you want" << endl;
    cin >> arr.size;
    arr.A = new int[arr.size];
    cout << "Enter the elements in the array";
    for (int i = 0; i < arr.size; i++)
    {
        cin >> arr.A[i];
    }
    Display(arr);
    Insert(&arr, 6, 19);
    Display(arr);
    return 0;
}