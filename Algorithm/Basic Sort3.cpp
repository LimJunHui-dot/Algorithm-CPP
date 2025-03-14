#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;
#include <thread>

// 오늘의 주제 : 퀵 정렬

// 자리를 찾은 숫자를 제외하고,
// 나머지 부분을 재귀적으로 QuickSort
int Parition(vector<int>& v, int left, int right)
{
	// pivot = 기준점
	int pivot = v[left];
	int low = left + 1;
	int high = right;

	// O(N)
	while (low <= high)
	{
		// 1단계)
		// - pivot >= arr[low]일 동안 low를 오른쪽으로 이동
		while (low <= right && pivot >= v[low])
			low++;
		
		// - pivot <= arr[high]일 동안 high를 왼쪽으로 이동
		while (high >= left + 1 && pivot <= v[high])
			high--;

		// 2단계)
		// - low < high라면, arr[low]와 arr[high] 데이터 교체
		if (low < high)
			swap(v[low], v[high]);

	}

	// 3단계)
	// - high <= low면 빠져나오고, pivot과 arr[high] 교체
	swap(v[left], v[high]);
	return high;
}

// O(N^2) < 최악
// O(NlogN) < 평균
void QuickSort(vector<int>& v, int left, int right)
{
	if (left > right)
		return;

	int pivot = Parition(v, left, right);
	QuickSort(v, left, pivot - 1);
	QuickSort(v, pivot + 1, right);
}

int main()
{
	vector<int> v;

	srand(time(0));

	for (int i = 0; i < 50; i++)
	{
		int randValue = rand() % 100;
		v.push_back(randValue);
	}

	QuickSort(v, 0, v.size() - 1);
}