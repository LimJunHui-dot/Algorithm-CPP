#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;
#include "Binary_Search_Tree.h"
#include <thread> 

// ������ ���� : ���� Ž�� Ʈ��

//   [20]
// [10]  [30]
//     [25]  [40]
//       [26]   [50]

int main()
{
	Binary_Search_Tree bst;
	
	bst.Insert(30);
	bst.Print();
	this_thread::sleep_for(1s);

	bst.Insert(10);
	bst.Print();
	this_thread::sleep_for(1s);

	bst.Insert(20);
	bst.Print();
	this_thread::sleep_for(1s);
	
	bst.Insert(25);
	bst.Print();
	this_thread::sleep_for(1s);
	
	bst.Insert(26);
	bst.Print();
	this_thread::sleep_for(1s);
	
	bst.Insert(40);
	bst.Print();
	this_thread::sleep_for(1s);
	
	bst.Insert(50);
	bst.Print();
	this_thread::sleep_for(1s);
	

	bst.Print();
}