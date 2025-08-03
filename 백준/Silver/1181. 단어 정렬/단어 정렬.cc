#include <iostream>
#include <string>
#include <cstring>

#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	// 중복 제거
	set<string> words_set;

	// 입력
	for (int i = 0; i < n; i++)
	{
		string word;
		cin >> word;

		words_set.insert(word);
	}

	// set을 vector로 변환
	vector<string> words(words_set.begin(), words_set.end());

	// 정렬
	sort(words.begin(), words.end(), [](const string& a, const string& b)
		{
			if (a.length() == b.length())
				return a < b; // 사전 순

			return a.length() < b.length(); // 길이 순
		});

	// 출력
	for (const string& word : words)
	{
		cout << word << '\n';
	}

	return 0;
}