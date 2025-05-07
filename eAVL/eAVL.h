//
// Created by leo on 5/6/25.
//

#ifndef AVL_TREE_AVLTREE_H
#define AVL_TREE_AVLTREE_H

#include <iostream>
#include "treeNode.h"

template<typename T>
class AVLTree{
public:
    AVLTree();

    void insert(const T& x);

    void remove(const T& x);

    void inorder() const;
private:
    TreeNode<T>* root;


};


#include "../src/treeNode.tpp"
#endif //AVL_TREE_AVLTREE_H
