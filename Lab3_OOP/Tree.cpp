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