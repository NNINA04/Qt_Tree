#pragma once

#include "Node.h"

template<class T>
class ITree
{
public:
    virtual Node<T>* Tree() = 0;
};