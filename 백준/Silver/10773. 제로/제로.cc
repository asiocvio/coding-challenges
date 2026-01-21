#include <iostream>
#include <stack>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	stack<int> s;
	int K;
	int n;
	int sum = 0;
	int size;

	cin >> K;

	for (int i = 0; i < K; ++i)
	{
		cin >> n;

		if (n)
			s.push(n);
		else
			s.pop();
	}

	size = s.size();
	for (int i = 0; i < size; i++)
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;

	return 0;
}