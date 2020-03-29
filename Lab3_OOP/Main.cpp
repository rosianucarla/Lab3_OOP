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
    tr.insert(tr.radacina, 10);
    tr.insert(tr.radacina, 19);
    tr.insert(tr.radacina, 27);
    assert(tr.WLR(tr.radacina) == "5 4 10 19 27 ");
    assert(tr.LWR(tr.radacina) == "4 5 10 19 27 ");
    assert(tr.LRW(tr.radacina) == "4 27 19 10 5 ");
    
}

