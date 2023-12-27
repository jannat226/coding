#include <iostream>
using namespace std;

int main()
{

    char a[] = "jannat";
    int count = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            count += 1;
        }
    }

    cout << count << endl;

    return 0;
}
