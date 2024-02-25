#include <iostream>
using namespace std;

int main()
{
    int n, max, V[100];
    cout << "Citim n. n=";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        max = V[i];
        if (V[i + 1] > max)
        {
            max = V[i + 1];
            V[i] = max;
        }
        else
        {
            max = V[i];
            V[i + 1] = max;
        }
    }

    cout << max;

    return 0;
}