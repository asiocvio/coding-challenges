#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int count = 0;
	int num = 666;

	while (true)
	{
		if (to_string(num).find("666") != -1)
		{
			count++;

			if (count == n)
			{
				cout << num;
				break;
			}
		}

		num++;
	}

	return 0;
}