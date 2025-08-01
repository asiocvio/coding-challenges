#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int arr[26];
	memset(arr, -1, sizeof(arr));

	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		int index = str[i] - 'a';
		if (arr[index] == -1)
		{
			arr[index] = i;
		}
	}

	for (int value : arr)
	{
		cout << value << " ";
	}

	return 0;
}