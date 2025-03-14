//#include <iostream>
//#include <vector>
//#include <list>
//#include <stack>
//using namespace std;
//
//// Stack
//
//template<typename T, typename Container = vector<T>>
//class Stack
//{
//public:
//	void push(const T& value)
//	{
//		_container.push_back(value);
//	}
//
//	void pop()
//	{
//		_container.pop_back();
//	}
//
//	T& top()
//	{
//		return _container.back();
//	}
//
//	bool empty() { return _container.empty(); }
//	int size() { return _container.size(); }
//private:
//	vector<T> _container;
//};
//
//int main()
//{
//	stack<int, list<int>> s;
//
//	// »ðÀÔ
//	s.push(1);
//	s.push(2);
//	s.push(3);
//
//	// ºñ¾ú³ª?
//	while (s.empty() == false)
//	{
//		int data = s.top();
//		s.pop();
//
//		cout << data << endl;
//	}
//
//	int size = s.size();
//}