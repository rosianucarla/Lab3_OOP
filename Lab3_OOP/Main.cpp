// Lab3_OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"
#include "Tree.h"
#include <cassert>

int main()
{
    Tree tr;
    tr.insert(tr.radacina, 5);
    tr.insert(tr.radacina, 4);
    assert(tr.countNodes(tr.radacina) == 2);
    tr.deletee(4, tr.radacina);
    assert(tr.countNodes(tr.radacina) == 1);
    tr.insert(tr.radacina, 10);
    tr.insert(tr.radacina, 19);
    tr.insert(tr.radacina, 27);
    assert(tr.countNodes(tr.radacina) == 4);
    assert(tr.countEdges(tr.radacina) == 3);
    assert(tr.height(tr.radacina) == 4);
    assert(tr.WLR(tr.radacina) == "5 10 19 27 ");
    assert(tr.LWR(tr.radacina) == "5 10 19 27 ");
    assert(tr.LRW(tr.radacina) == "27 19 10 5 ");
    
}

