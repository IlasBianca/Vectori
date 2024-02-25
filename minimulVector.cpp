#include <iostream>
using namespace std;

int main()
{
    int V[100];
    int n, min;
    cout << "Citim n. n=";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    for (int i = 0; i < n; i++)
    {
        min = V[i];
        if (V[i + 1] < min)
        {
            min = V[i + 1];
            V[i] = min;
        }
        else
        {
            min = V[i];
            V[i + 1] = min;
        }
    }

    cout << min;

    return 0;
}