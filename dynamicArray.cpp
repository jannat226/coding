#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of the array ";
    cin >> n;
    int *p;
    p = new int[n];
    cout << "Enter the elements of the array are";
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    cout << "The elements of the array are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << endl;
    }
    return 0;
}