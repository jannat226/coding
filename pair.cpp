#include <iostream>
#include <list>
#include <deque>
using namespace std;

void print()
{
    cout << "hello world \n";
}
int sum(int a, int b)
{
    cout << a + b << "\n";
    return 0;
}
int main()
{
    // pair ----->
    int a;
    cin >> a;
    cout << "hey\n";
    print();
    sum(3, 4);
    pair<int, int> p(1, 2);
    pair<int, int> p2 = make_pair(1, 2);

    cout << p.first;
    pair<int, int> arr[] = {make_pair(1, 2), make_pair(2, 4)};

    // vector ---->
    cout << arr[0].first << endl;
    vector<int> c(5, 100);
    c.push_back(2);
    vector<int>::iterator it = c.begin();
    int d = *it;

    cout << d;
    for (vector<int>::iterator it = c.begin(); it != c.end(); it++)
    {
        cout << *it << " ";
    }
    c.emplace_back(3);
    cout << c.at(6);
    c.insert(c.begin(), 200);
    vector<int> copy(4, 400);
    c.insert(c.begin(), copy.begin(), copy.end());
    for (auto it = c.begin(); it != c.end(); it++)
    {
        cout << *it;
    }

    // list ---->
    cout << "list functionality";
    list<int> ls;
    ls.push_back(2);
    // ls.emplace_back(3);
    // ls.emplace_front(1);

    // deque()
    deque<int> dq;
    dq.push_back(1);

    dq.push_front(4);

    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();

    for (deque<int>::iterator it = dq.begin(); it != dq.end(); it++)
    {
        cout << "deque is" << *it << endl;
    }
    return 0;
}