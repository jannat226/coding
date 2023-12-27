#include <iostream>
using namespace std;
struct Arr
{
    int *A;
    int size;
};
int Display(struct Arr arr)
{
    for (int i = 0; i < arr.size; i++)
    {
        cout << arr.A[i];
    }
    return 0;
}
int Get(struct Arr arr, int e)
{
    for (int i = 0; i < arr.size; i++)
    {
        if (arr.A[i] == e)
        {
            cout << arr.A[i];
            return 1;
        }
    }
    return -1;
}
int Max(struct Arr arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.size; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];

            return 1;
        }
    }
    cout << "\n Max is \t" << max;
}

int main()
{
    struct Arr arr;
    cout << "\nEnter the size of an array\n";
    cin >> arr.size;
    arr.A = new int[arr.size];
    cout << "\nEnter the elements of the Array\n";
    for (int i = 0; i < arr.size; i++)
    {
        cin >> arr.A[i];
    }
    cout << "\nThis is the array\n";
    Display(arr);
    cout << "\nEnter the element whose index you want to get from the Array\n";
    int e;
    cin >> e;

    Get(arr, e);
    cout << "\nThe max element in this array is \n";

    Max(arr);
    return 0;
}