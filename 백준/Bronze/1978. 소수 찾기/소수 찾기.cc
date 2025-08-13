#include <iostream>

using namespace std;

bool is_prime(int n);

int main()
{
    int t;
    cin >> t;

    int count = 0;
    while (t--)
    {
        int number;
        cin >> number;

        if (is_prime(number))
            count++;
    }

    cout << count;

    return 0;
}

bool is_prime(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}