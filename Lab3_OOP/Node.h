#pragma once
#include "Tree.h"
class Node {
	friend class Tree; //acces to private atribute

private:
	int val;
	Node* links, * rechts;

public:
	Node(int x) {
		val = x;
		links = rechts = nullptr;
	}
};