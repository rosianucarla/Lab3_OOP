#pragma once
#include "Node.h"
#include<string>
class Tree {
	friend class Node;

protected:
public:
	Node* radacina;

	Tree(); //Konstruktor

	void insert(Node* tree, int v);  //insereaza un nod nou


	void my_delete(Node* tree, int v); //sterge un nod dat ca param


	std::string LWR(Node* n); //Inorder (links wurzel rechts)s

	std::string WLR(Node* n); //Preorder

	std::string LRW(Node* n); //Postorder
};