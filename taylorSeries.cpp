#include <iostream>
using namespace std;

double taylorSeries(int x, int n)
{
    static double result = 1.0;
    static int term = 1;

    if (n == 0)
    {
        return result;
    }

    term *= x;
    term /= n;

    result += term;

    return taylorSeries(x, n - 1);
}

int main()
{
    cout << "Enter the value of x for the Taylor series: ";
    int x;
    cin >> x;

    cout << "Enter the number of terms (n) for the Taylor series: ";
    int n;
    cin >> n;

    double result = taylorSeries(x, n);

    cout << "Result of the Taylor series: " << result << endl;

    return 0;
}
