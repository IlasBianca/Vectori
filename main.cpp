#include <iostream>
using namespace std;

int main()
{
    int V[100];
    int n, min, max;
    cout << "Citim n. n=";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> V[i];
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (V[i] > V[i + 1])
        {
            max = V[i];
            min = V[i + 1];
        }
        else
        {
            max = V[i + 1];
            min = V[i];
        }

        //caz 1: al treilea element din vector este mai mare decat max si decat min
        if (V[i + 2] > max && V[i+2]> min)
        {
            max = V[i + 2];
            V[i + 1] = min;
        }
        // caz 2: al treilea element din vector este mai mic decat min si mai mare decat max
        else if (V[i+2] < min && V[i+2]< max){
            min = V[i+2];
            V[i + 1] = max;
        }

        //caz 3: al treilea element din vector este mai mare decat min si mai mic decat max
        else {
            V[i+2]=max;
            V[i+1]=min;
        }
    }
    cout << "min final:" << min << endl;
    cout << "max final:" << max << endl;


    return 0;
}