#include <iostream>
using namespace std;
// creating 2D array in heap
int main()
{
    // USING POINTER
    int *A[3];
    A[0] = new int[2];
    A[1] = new int[2];
    A[2] = new int[2];
    cout << "Enter the elements of 2D array A";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "The elements of 2D array A";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << A[i][j] << endl;
        }
    }
    // DOUBLE POINTER
    int **B;
    B = new int *[3];
    B[0] = new int[2];
    B[1] = new int[2];
    B[2] = new int[2];
    cout << "Enter the elements of 2D array B";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    };
    cout << "The elements of 2D array B";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << B[i][j] << endl;
        }
    }
    return 0;
}