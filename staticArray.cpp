#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int A[n];
    cout << "enter the element of the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    cout << "the elements of the array are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    return 0;
}