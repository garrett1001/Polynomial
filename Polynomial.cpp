#include "Polynomial.h"
#include "Node.h"
#include <cstddef>
#include <iostream>

using namespace std;

template<class ItemType>
Polynomial<ItemType>::Polynomial()
{
    headPtr = nullptr;
}

template<class ItemType>
void Polynomial<ItemType>::insert( const ItemType& newEntry )
{
    Node<ItemType>* nextPtr = new Node<ItemType>(newEntry, headPtr);
    headPtr = nextPtr;
}

template<class ItemType>
void Polynomial<ItemType>::print()
{
    Node<ItemType>* curPtr = headPtr;

    while (curPtr != nullptr)
    {
        cout<<curPtr->getItem()<<endl;

        curPtr = curPtr->getNext();
    }
}
