#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;
#include <thread>

// ������ ���� : �� ����

// �ڸ��� ã�� ���ڸ� �����ϰ�,
// ������ �κ��� ��������� QuickSort
int Parition(vector<int>& v, int left, int right)
{
	// pivot = ������
	int pivot = v[left];
	int low = left + 1;
	int high = right;

	// O(N)
	while (low <= high)
	{
		// 1�ܰ�)
		// - pivot >= arr[low]�� ���� low�� ���������� �̵�
		while (low <= right && pivot >= v[low])
			low++;
		
		// - pivot <= arr[high]�� ���� high�� �������� �̵�
		while (high >= left + 1 && pivot <= v[high])
			high--;

		// 2�ܰ�)
		// - low < high���, arr[low]�� arr[high] ������ ��ü
		if (low < high)
			swap(v[low], v[high]);

	}

	// 3�ܰ�)
	// - high <= low�� ����������, pivot�� arr[high] ��ü
	swap(v[left], v[high]);
	return high;
}

// O(N^2) < �־�
// O(NlogN) < ���
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