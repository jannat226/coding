#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
};
int BinSearch(struct Array arr, int l, int h, int key)
{
    int m = (l + h) / 2;
    while (l <= h)
    {
        if (arr.A[m] == key)
        {
            cout << "\nIndex at which the seached element is present at \n"
                 << m;
            return m;
        }
        else if (m < key)
        {
            l = m + 1;
        }
        else
        {
            h = m - 1;
        }
    }
    return -1;
};
int main()
{
    struct Array arr;

    cout << "\nEnter the size of array\n";
    cin >> arr.size;
    arr.A = new int[arr.size];
    cout << "\n Enter the elements of the array in the sorted format";
    for (int i = 0; i < arr.size; i++)
    {
        cin >> arr.A[i];
    }
    cout << "\n Enter the key element you want to search";
    int key;
    cin >> key;
    int result = BinSearch(arr, 0, arr.size, key);
    cout << " result is " << result;

    return 0;
}