//#include <iostream>
//#include <vector>
//#include <list>
//#include <stack>
//#include <queue>
//using namespace std;
//
//// Queue
//
//template<typename T>
//class ArrayQueue
//{
//public:
//	ArrayQueue()
//	{
//		_container.resize(100);
//	}
//
//	void push(const T& value)
//	{
//		// TODO : �� ã���� üũ
//		if (_size == _container.size())
//		{
//			// ���� �۾�
//			int newSize = max(1, _size * 2);
//			vector<T> newData;
//			newData.resize(newSize);
//
//			// ������ ����
//			for (int i = 0; i < _size; i++)
//			{
//				int index = (_front + 1) % _container.size();
//				newData[i] = _container[index];
//			}
//		}
//
//		_container[_back] = value;
//		_back = (_back + 1) % _container.size();
//		_size++;
//	}
//
//	void pop()
//	{
//		_front = (_front + 1) % _container.size();
//	}
//
//	T& front()
//	{
//		return _container[_front];
//	 }
//
//	bool empty() { return _size == 0; }
//	int size() { return _size; }
//
//private:
//	vector<T> _container;
//
//	int _front = 0;
//	int _back = 0;
//	int _size = 0;
//};
//
//int main()
//{
//	ArrayQueue<int> q;
//
//	for (int i = 0; i < 100; i++)
//		q.push(i);
//
//	while (q.empty() == false)
//	{
//		int value = q.front();
//		q.pop();
//		cout << value << endl;
//	}
//
//	int size = q.size();
//
//	return 0;
//}