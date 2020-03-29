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


	void deletee(int v, Node* tree); //sterge un nod dat ca param


	std::string LWR(Node* n); //Inorder (links wurzel rechts)s

	std::string WLR(Node* n); //Preorder

	std::string LRW(Node* n); //Postorder

	int countNodes(Node* n); //numar laturi

	int countEdges(Node* n); //inaltimea

	int height(Node* n);
};