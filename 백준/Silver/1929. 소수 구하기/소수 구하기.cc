#include <iostream>

using namespace std;

const int MAX = 1000001;
bool isPrime[MAX];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int m, n;
    cin >> m >> n;

    for (int i = 2; i <= n; i++)
    {
        isPrime[i] = true;
    }

    for (int p = 2; p * p <= n; p++)
    {
        if (isPrime[p])
        {
            for (int i = p * p; i <= n; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    for (int num = m; num <= n; num++)
    {
        if (isPrime[num])
        {
            cout << num << '\n';
        }
    }

    return 0;
}