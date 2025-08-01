#include <iostream>

using namespace std;

int main()
{
	int num;
	string str;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> str;

		int sum = 0;
		int count = 0;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == 'O')
				count++;

			else
				count = 0;

			sum += count;
		}

		cout << sum << "\n";
	}

	return 0;
}