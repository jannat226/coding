#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout << a << " value of p" << endl;
    cout << &a << " value of address of a" << endl;
    cout << p << " value of p" << endl;
    cout << &p << " value of address of p" << endl;
    cout << *p << " value @ the address which stored in  p" << endl;
    return 0;
}
