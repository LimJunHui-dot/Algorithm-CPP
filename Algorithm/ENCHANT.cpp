#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;
#include <thread>
#include <windows.h>

// 오늘의 주제 : 동적 계획법(DP)
// ENCHANT

// +0 집행검
// 무기 강화 주문서 => +1 / +2 / +3 중 하나

// +9 집행검 뜨는 경우의 수는?
// ex) +1 +2 +3 +4 ... +9
// ex) +3 +6 +9
// ex) +1 +3 +4

// 목표 강화 단계
int N;
// 메모이제이션을 위한 캐시 배열
int cache[100];

// [+num]에서 시작해서, [+N]까지 가는 경우의 수
int Enchant(int num)
{
	// 기저 사례
	if (num > N)
		return 0;
	if (num == N)
		return 1;

	// 캐시
	int& ret = cache[num];
	if (ret != -1)
		return ret;

	// 적용
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

	// cache 배열을 -1로 초기화하여 아직 계산되지 않은 상태를 나타낸다.
	memset(cache, -1, sizeof(cache));

	// Enchant(0)을 호출하여 초기 강화 단계에서 목표 강화 단계까지 도달하는 경우의 수를 계산해보자.
	int ret = Enchant(0);
	cout << ret << endl;
}