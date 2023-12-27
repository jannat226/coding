#include <iostream>
using namespace std;
int sum(int x)
{
    int result = 0;
    if (x >= 1)
    {
        result = x + sum(x - 1);
    }
    return result;
}
int main()
{
    int n, result;
    cout << "enter the natural number upto which u want to find sum";
    cin >> n;
    result = sum(n);
    cout << result;
    return 0;
}