#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
using namespace std;
#include "Binary_Search_Tree.h"



int main()
{
    Binary_Search_Tree bst;

	bst.Insert(30);
	bst.Insert(10);
	bst.Insert(20);
	bst.Insert(25);
	bst.Insert(26);
	bst.Insert(40);
	bst.Insert(50);
	
	bst.Delete(20);
	bst.Delete(26);

	bst.Print();
}