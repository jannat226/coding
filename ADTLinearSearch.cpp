#include <iostream>
using namespace std;
struct Array
{
    int *A;
    int size;
};
int LinearSearch(struct Array arr, int e)
{
    for (int i = 0; i < arr.size; i++)
    {
        if (arr.A[i] == e)
        {
            cout << "\n The array is on index \n"
                 << arr.A[i];
            return i;
        }
    }
    return -1;
}
int main()
{
    struct Array Arr;
    cout << "Enter the size of array";
    cin >> Arr.size;
    Arr.A = new int[Arr.size];
    cout << "Enter the elements of array";

    for (int i = 0; i < Arr.size; i++)
    {
        cin >> Arr.A[i];
    }
    cout << "Enter the element you want to search";
    int e;
    cin >> e;
    LinearSearch(Arr, e);
    return 0;
}