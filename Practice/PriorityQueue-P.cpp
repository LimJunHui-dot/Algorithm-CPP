#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;

template<typename T, typename Container = vector<T>, typename Predicate = less<T>>
class PriorityQueue 
{
public:
	void push(const T& value)
	{
		// �켱 �� �������� �����ش�
	
	}

private:
	Container _heap = {};
	Predicate _predicate = {};
};