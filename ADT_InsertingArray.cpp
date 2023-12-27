#include <iostream>
using namespace std;
struct Arr
{
    int *A;
    int size;
    int length;
};
int Insert(struct Arr arr, int e)
{
    if (arr.size < arr.length)
    {
        arr.A[arr.size] = e;
        cout << "Element have been inserted";
    }
};
int Display(struct Arr arr)
{
    for (int i; i < arr.size; i++)
    {
        cout << arr.A[i];
    }
}
int main()
{
    struct Arr arr;
    cout << "Enter the size of array, you want and its length ";
    cin >> arr.size >> arr.length;
    arr.A = new int[arr.size];
    cout << "Enter the elements of the array";
    for (int i = 0; i < arr.size; i++)
    {
        cin >> arr.A[i];
    }
    int e;
    cout << "Enter the element you want to insert ";
    cin >> e;
    Insert(arr, e);
    Display(arr);
    return 0;
}