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