#include <iostream>
using namespace std;

int fib(int n)
{
    int result;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        result = fib(n - 2) + fib(n - 1);
        return result;
    }
    return result;
}
int main()
{
    int n = 0, result = 0;
    cout << "enter the number of term upto which fibonacci series you want ";
    cin >> n;
    result = fib(n);
    cout << "result is " << result;
    return 0;
}