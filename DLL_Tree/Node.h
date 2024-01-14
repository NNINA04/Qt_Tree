#pragma once

template<class T>
class DLL_TREE_EXPORT Node
{
public:
    T Value;
    Node* Left;
    Node* Right;
    
    ~Node()
    {
        if (!Left)
            delete Left;
        if (!Right)
            delete Right;
    }
};
