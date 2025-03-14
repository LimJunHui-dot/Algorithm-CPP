#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;
#include <thread>
#include <windows.h>

// ������ ���� : ���� ��ȹ��(DP)
// ENCHANT

// +0 �����
// ���� ��ȭ �ֹ��� => +1 / +2 / +3 �� �ϳ�

// +9 ����� �ߴ� ����� ����?
// ex) +1 +2 +3 +4 ... +9
// ex) +3 +6 +9
// ex) +1 +3 +4

// ��ǥ ��ȭ �ܰ�
int N;
// �޸������̼��� ���� ĳ�� �迭
int cache[100];

// [+num]���� �����ؼ�, [+N]���� ���� ����� ��
int Enchant(int num)
{
	// ���� ���
	if (num > N)
		return 0;
	if (num == N)
		return 1;

	// ĳ��
	int& ret = cache[num];
	if (ret != -1)
		return ret;

	// ����
	return ret = Enchant(num + 1) + Enchant(num + 2) + Enchant(num + 3);
}

int main()
{
	N = 4;
	// +1 +2 +3 +4
	// +1 +2 +4
	// +1 +3 +4
	// +1 +4
	// +2 +3 +4
	// +2 +4
	// +3 +4

	// cache �迭�� -1�� �ʱ�ȭ�Ͽ� ���� ������ ���� ���¸� ��Ÿ����.
	memset(cache, -1, sizeof(cache));

	// Enchant(0)�� ȣ���Ͽ� �ʱ� ��ȭ �ܰ迡�� ��ǥ ��ȭ �ܰ���� �����ϴ� ����� ���� ����غ���.
	int ret = Enchant(0);
	cout << ret << endl;
}