#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        priority_queue<int> pq;
        queue<pair<int, int>> q;

        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            int importance;
            cin >> importance;
            q.push({ i, importance });
            pq.push(importance);
        }

        int count = 0;
        while (!q.empty())
        {
            int index = q.front().first;
            int importance = q.front().second;
            q.pop();

            if (pq.top() == importance)
            {
                pq.pop();
                count++; 

                if (index == m)
                {
                    cout << count << '\n';
                    break;
                }
            }

            else
            {
                q.push({ index, importance });
            }
        }
    }

    return 0;
}