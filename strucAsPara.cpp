#include <iostream>
using namespace std;
struct test
{
    int arr[5];
    int n;
};
int fun1(struct test *r)
{
    cout << r->n;
    return 0;
}
int fun2(struct test r)
{
    cout << r.n;
    return 0;
}
int fun3(struct test *r)
{
    r->n = 20;
    cout << r->n;
    return 0;
}
int main()
{
    test r1 = {{1, 2, 3, 4, 5}, 5};
    fun1(&r1);
    fun2(r1);
    fun3(&r1);
    cout << r1.n;
    return 0;
}
