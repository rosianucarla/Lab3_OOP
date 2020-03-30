#include <iostream>
#include "Tree.h"
#include "Node.h"


Tree::Tree() { //Kontruktor
	radacina = nullptr;
}

void Tree::call_insert(int v)
{
     insert(v);
}

void Tree::insert(int v) {//insert a new node
    if (radacina == nullptr) { 
        radacina = new Node(v);
    }
    else {
        Node* nod = radacina;
        while (nod) {
            if (nod->val > v) {
                if (nod->links == nullptr) {
                    nod->links = new Node(v);
                    break;
                }
                nod = nod->links;
            }
            else if (nod->val < v) {
                if (nod->rechts == nullptr) {
                    nod ->rechts = new Node(v);
                    break;
                }
                nod = nod->rechts;
            }


        }
    }
}

void Tree::call_delete(int v)
{
    deletee(v);
}

void Tree::deletee(int v) {//loschen
    Node* ptr = radacina;
    while (ptr) {
        if (ptr->rechts != nullptr)
            if (ptr->rechts->val == v) {
                ptr->rechts = ptr->rechts->links;
                break;
            }
        if (ptr->links != nullptr)
            if (ptr->links->val == v) {
                ptr->links = ptr->links->rechts;
                break;
            }
        if (ptr->val > v) {
            if (ptr->links == nullptr) {
                break;
            }
            ptr = ptr->links;
        }
        else
            if (ptr->val < v) {
                if (ptr->rechts == nullptr) {
                    break;
                }
                ptr = ptr->rechts;
            }
    }
}

std::string Tree::call_LWR()
{
    return LWR(this->radacina);
}

std::string Tree::LWR(Node* radacina) {//inorder
    if (radacina == NULL)
        return "";
    return LWR(radacina->links) + std::to_string(radacina->val) + " " + LWR(radacina->rechts);
}

std::string Tree::WLR(Node* radacina) {//preorder
    if (radacina == NULL)
        return "";
    return std::to_string(radacina->val) + " " + WLR(radacina->links) + WLR(radacina->rechts);
}

std::string Tree::call_WLR()
{
    return WLR(this->radacina);
}

std::string Tree::call_LRW()
{
    return LRW(this->radacina);
}

std::string Tree::LRW(Node* radacina) {//postorder
    if (radacina == NULL)
        return "";
    return LRW(radacina->links) + LRW(radacina->rechts)  + std::to_string(radacina->val) + " ";
}

int Tree::call_countNodes() {

    return countNodes(this->radacina);
}

int Tree::countNodes(Node* n) {//Knotenanzahl
    if (n == nullptr)
        return 0;
    else
        return 1 + countNodes(n->links) + countNodes(n->rechts);
}

int Tree::call_countEdges()
{
    return countEdges(this->radacina);
}

int Tree::countEdges(Node* n) {
    return countNodes(this->radacina) - 1;
}

int Tree::call_height() {

    return height(this->radacina);
}

int Tree::height(Node* n) {
    if (n == NULL)
        return 0;
    else
    {
        int l = height(n->links);
        int r = height(n->rechts);

        if (l > r)
            return(l + 1);
        else return(r + 1);
    }
}