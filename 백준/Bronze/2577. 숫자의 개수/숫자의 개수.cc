#include <iostream>

using namespace std;

int main()
{
	int count[10] = { 0 };

	int a;
	int b;
	int c;

	cin >> a >> b >> c;

	int num = a * b * c;
	
	while (num != 0)
	{
		count[num % 10]++;
		num /= 10;
	}

	for (int value : count)
	{
		cout << value << endl;
	}

	return 0;
}