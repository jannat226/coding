#include <iostream>
using namespace std;
int fact(int a)
{
    int result = 0;
    if (a == 0 || a == 1)
    {
        return 1; // Base case: 0! and 1! are both 1
    }
    result = a * fact(a - 1);

    return result;
}
int main()
{
    int n, result;
    cout << "enter the number whose factorial ypu want to search";
    cin >> n;
    if (n >= 0)
    {
        result = fact(n);
    }
    else
    {
        cout << "there is no factorial of negative number";
    }

    cout << result;
    return result;
}