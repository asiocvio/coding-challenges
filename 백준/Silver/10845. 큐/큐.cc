#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

queue<int> q;

void pushCommand();
void popCommand();
void sizeCommand();
void emptyCommand();
void frontCommand();
void backCommand();

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
        {"front",  frontCommand},
        {"back",   backCommand}
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
    q.push(x);
}

void popCommand()
{
    if (q.empty())
        cout << -1 << "\n";
    else
    {
        cout << q.front() << "\n";
        q.pop(); 
    }
}

void sizeCommand()
{
    cout << q.size() << "\n";
}

void emptyCommand()
{
    cout << (q.empty() ? 1 : 0) << "\n";
}

void frontCommand()
{
    if (q.empty())
        cout << -1 << "\n";
    else
        cout << q.front() << "\n";
}

void backCommand()
{
    if (q.empty())
        cout << -1 << "\n";
    else
        cout << q.back() << "\n";
}