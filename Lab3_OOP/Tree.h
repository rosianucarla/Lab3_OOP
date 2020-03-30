#pragma once
#include "Node.h"
#include<string>
class Tree {
	friend class Node;

private:
	//radacina si functiile sunt private
	Node* radacina;

	std::string LWR(Node* n); //Inorder (links wurzel rechts)s

	std::string WLR(Node* n); //Preorder

	std::string LRW(Node* n); //Postorder

	void insert(int v);  //insereaza un nod nou

	void deletee(int v); //sterge un nod dat ca param

	int countNodes(Node* n); //numar noduri

	int countEdges(Node* n); //numar laturi

	int height(Node* n);//inaltimea

protected:
public:

	Tree(); //Konstruktor

//pentru a putea accesa radacina si functiile, am creat functii suplimentare publice
	Node* get_radacina() {
		return radacina;
	};

	void call_insert(int v);


	void call_delete(int v); 

	std::string call_LWR(); //Inorder (links wurzel rechts)s
	

	std::string call_WLR(); //Preorder

	std::string call_LRW(); //Postorder

	int call_countNodes(); //numar laturi

	int call_countEdges(); 

	int call_height();//inaltime
};