#include <iostream>
using namespace std;
int comb(int x, int r)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return (comb(x - 1, r - 1) + comb(x - 1, r));
    }
}
int main()
{
    int n = 0, r = 0, result;
    cout << "enter the value for n and r";
    cin >> n >> r;
    result = comb(n, r);
    cout << "result is " << result;
    return 0;
}