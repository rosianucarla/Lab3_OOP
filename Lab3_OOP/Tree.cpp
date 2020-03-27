#include <iostream>
#include "Tree.h"
#include "Node.h"


Tree::Tree() { //Kontruktor
	radacina = nullptr;
}

void Tree::insert(Node* tree, int v) {//insert a new node
    if (radacina == nullptr) {
        radacina = new Node(v);
    }
    else {
        Node* ptr = radacina;
        while (ptr) {
            if (ptr->val > v) {
                if (ptr->links == nullptr) {
                    ptr->links = new Node(v);
                    break;
                }
                ptr = ptr->links;
            }
            else if (ptr->val < v) {
                if (ptr->rechts == nullptr) {
                    ptr->rechts = new Node(v);
                    break;
                }
                ptr = ptr->rechts;
            }


        }
    }
}

void Tree::deletee(int v, Node* tree) {//loschen
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

std::string Tree::LRW(Node* radacina) {//postorder
    if (radacina == NULL)
        return "";
    return LRW(radacina->links) + LRW(radacina->rechts)  + std::to_string(radacina->val) + " ";
}

int Tree::countNodes(Node* n) {//Knotenanzahl
    if (n == nullptr)
        return 0;
    else
        return 1 + countNodes(n->links) + countNodes(n->rechts);
}

int Tree::countEdges(Node* n) {
    return countNodes(n) - 1;
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