#include <iostream>
using namespace std;
void fun(int a)
{

    if (a > 0)
    {
        cout << a << endl;
        fun(a - 1);
    }
}
int main()
{
    int x = 10;
    fun(x);
    return 0;
}