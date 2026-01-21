#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

stack<int> s;

void pushCommand();
void popCommand();
void sizeCommand();
void emptyCommand();
void topCommand();

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    unordered_map<string, void(*)()> commandMap = {
        {"push",   pushCommand},
        {"pop",    popCommand},
        {"size",   sizeCommand},
        {"empty",  emptyCommand},
        {"top",    topCommand}
    };

    for (int i = 0; i < N; ++i) {
        string command;
        cin >> command;
        commandMap[command]();
    }

    return 0;
}

void pushCommand()
{
    int x;
    cin >> x;
    s.push(x);
}

void popCommand()
{
    if (s.empty())
        cout << -1 << "\n";
    else
    {
        cout << s.top() << "\n";
        s.pop(); 
    }
}

void sizeCommand()
{
    cout << s.size() << "\n";
}

void emptyCommand()
{
    cout << (s.empty() ? 1 : 0) << "\n";
}

void topCommand()
{
    if (s.empty())
        cout << -1 << "\n";
    else
        cout << s.top() << "\n";
}