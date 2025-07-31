#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;

	getline(cin, str);

	int count = 1;
	int length = str.length();

	for (int i = 0; i < length; i++)
	{
		if (str[i] == ' ')
			count++;
	}

	if (str[0] == ' ')
		count--;

	if (str[length - 1] == ' ')
		count--;

	cout << count;

	return 0;
}