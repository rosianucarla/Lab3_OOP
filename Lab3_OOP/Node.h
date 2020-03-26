#pragma once
class Node {
	friend class Tree; //acces to private atribute

private:
	int val;
	Node* links, * rechts;

protected:
	Node(int x) {
		val = x;
		links = rechts = nullptr;
	}
};