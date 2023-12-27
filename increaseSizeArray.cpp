#include <iostream>
using namespace std;

int main()
{
    int *p, *q, n, m;
    cout << "Enter the size of array " << endl;
    cin >> n;
    p = new int[n];
    cout << "Enter the elements in heap array p" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    q = new int[m];
    cout << "Enter the new size of array " << endl;
    cin >> m;
    cout << "Enter the elements in heap array q" << endl;
    for (int i = 0; i < n; i++)
    {
        q[i] = p[i];
        cout << q[i] << endl;
    }
    delete[] p;
    p = q;
    q = NULL;
    return 0;
}