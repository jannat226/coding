#include <iostream>
using namespace std;

int main()
{

    char a[] = "jannat";

    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {

            a[i] = a[i] - 32;
        }
        cout << a[i] << "\t";
    }

    cout << endl;

    return 0;
}
