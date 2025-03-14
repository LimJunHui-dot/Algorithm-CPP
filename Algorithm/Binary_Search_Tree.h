#pragma once

//    [10]
//  [5]  [20]
//         [30]

enum class Color
{
	Red = 0,
	Black = 1,
};

struct Node
{
	Node* parent = nullptr;
	Node* left = nullptr;
	Node* right = nullptr;
	int key = {};
	Color color = Color::Black;
};

// Red-Black Tree
// 1) ��� ���� Red or Black
// 2) Root�� Black
// 3) Leaf(NIL)�� Black
// 4) Red ����� �ڽ��� Black (�����ؼ� Red-Red x)
// 5) �� ���� ~ �������� ���� ��ε��� ��� ���� ���� Black

class Binary_Search_Tree
{
public:
	Binary_Search_Tree();
	~Binary_Search_Tree();

	void	Print();
	void	Print(Node* node, int x, int y);
	
	void	Print_Inorder() { Print_Inorder(_root); }
	void	Print_Inorder(Node* node);

	Node*	Search(Node* node, int key);
	Node*	Search2(Node* node, int key);

	Node*	Min(Node* node);
	Node*	Max(Node* node);
	Node*	Next(Node* node);

	void    Insert(int key);
	void	InsertFixup(Node* node);

	void	Delete(int key);
	void	Delete(Node* node);
	void    DeleteFixup(Node* node);

	void	Replace(Node* u, Node* v);

	// Red-Black Tree
	void LeftRotate(Node* node);
	void RightRotate(Node* node);

private:
	Node* _root = nullptr;
	Node* _nil = nullptr;
};

