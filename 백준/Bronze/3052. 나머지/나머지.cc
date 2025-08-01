#include <iostream>

using namespace std;

int main()
{
	bool mod[42] = { false };

	int num;

	for (int i = 0; i < 10; i++)
	{
		cin >> num;
		mod[num % 42] = true;
	}

	int count = 0;

	for (bool value : mod)
	{
		if (value == true)
			count++;
	}

	cout << count;

	return 0;
}