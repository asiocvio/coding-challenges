#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	while (true)
	{
		// 입력
        int nums[3];
		cin >> nums[0] >> nums[1] >> nums[2];

		// 종료 조건
		if (nums[0] == 0 && nums[1] == 0 && nums[2] == 0)
			return 0;

		// 오름차순 정렬
		sort(nums, nums + 3);

		// 직사각형인지 판별(피타고라스 정리)
		if ((nums[2] * nums[2]) == (nums[0] * nums[0]) + (nums[1] * nums[1]))
			cout << "right\n";

		else
			cout << "wrong\n";
	}
}