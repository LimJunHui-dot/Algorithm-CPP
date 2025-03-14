#include <iostream>
#include <vector>
#include <stack>
#include <list>
#include <queue>
using namespace std;
#include <thread>

// ������ ����: ����

// C# �ڷᱸ��/�˰���
// -> A* OpenList (PQ)
// -> C# List = C++ vector

// PQ O(logN)
// Red-Black Tree O(logN)
// Sorting ?

// 1) ���� ����(Bubble Sort)
// �Ѿ� �񱳸� �ϸ鼭 ���ڸ� ���ϱ� 
void BubbleSort(vector<int>& v)
{
	const int n = (int)v.size();

	// (N-1) + (N-2) +.... + 2 + 1
	// ���������� �� = N * (N-1) / 2
	// O(N^2)
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < (n - 1 - i); j++)
		{
			if (v[j] > v[j + 1])
			{
				int temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
}

// [3][5][9][J][K]
// �Ѳ����� ��ĵ�� �ϸ鼭 ���ڸ� �����
// 2) ���� ���� (Selection Sort)
void SelectionSort(vector<int>& v)
{
	const int n = (int)v.size();

	// O(N^2)
	for (int i = 0; i < n - 1; i++)
	{
		int bestIdx = i;

		for (int j = i + 1; j < n; j++)
		{
			if (v[j] < v[bestIdx])
				bestIdx = j;
		}

		// ��ȯ
		int temp = v[i];
		v[i] = v[bestIdx];
		v[bestIdx] = temp;
	}
}


// 3) ���� ����(Insertion Sort)
//  �ǽð����� ���ĵ� �����͸� ������ 
// i = 2
// insertData = [5]
// [4][5][9][K][3]
// ���� ���� �����Ѵٰ� ���� �� ���ĵ� �����͸� �������� ����
// �׷��ٰ� ���Ƿ� VECTOR�� �ϳ� ������� �ʿ�� ����.
void InsertionSort(vector<int>& v)
{
	const int n = (int)v.size();

	// O(N^2)
	for (int i = 1; i < n; i++)
	{
		int insertData = v[i];

		int j;
		for (j = i - 1; j >= 0; j--)
		{
			if (v[j] > insertData)
				v[j + 1] = v[j];
			else
				break;
		}

		v[j + 1] = insertData;
	}
}

int main()
{
	vector<int> v{ 1,5,3,4,2 };

	

	// BubbleSort(v);
	// SelectionSort(v);
	InsertionSort(v);
}