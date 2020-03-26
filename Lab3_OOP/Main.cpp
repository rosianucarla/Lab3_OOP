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
    tr.insert(tr.radacina, 11);
    tr.insert(tr.radacina, 12);
    tr.insert(tr.radacina, 3);
    assert(tr.WLR(tr.radacina) == "5 4 3 10 11 12 ");
    assert(tr.LWR(tr.radacina) == "3 4 5 10 11 12 ");
    assert(tr.LRW(tr.radacina) == "3 4 12 11 10 5 ");
    
}

