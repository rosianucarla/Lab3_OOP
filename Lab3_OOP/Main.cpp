// Lab3_OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include "Tree.h"
#include <cassert>

int main()
{
    Tree tr;
    tr.call_insert(5); //tr.insert(get_radacina(),5) in cazul in care insert era public si radacina privata
    tr.call_insert(4);
    assert(tr.call_countNodes() == 2);
    tr.call_delete(4);
    assert(tr.call_countNodes() == 1);
    tr.call_insert(10);
    tr.call_insert(19);
    tr.call_insert(27);
    assert(tr.call_countNodes() == 4);
    assert(tr.call_countEdges() == 3);
    assert(tr.call_height() == 4);
    assert(tr.call_WLR() == "5 10 19 27 ");
    assert(tr.call_LWR() == "5 10 19 27 ");
    assert(tr.call_LRW() == "27 19 10 5 ");
    std::cout << "All tests over!";
    
}

