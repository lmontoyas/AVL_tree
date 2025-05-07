//
// Created by leo on 5/6/25.
//

#ifndef AVL_TREE_TREENODE_H
#define AVL_TREE_TREENODE_H

template <typename T>
struct TreeNode {
    T entry; // llave
    int count; // contador
    int bal; // -1, 0, +1
    TreeNode *leftNode, *rightNode; //sub arboles

    explicit TreeNode(const T& val);
};

#include "../src/treeNode.tpp"
#endif //AVL_TREE_TREENODE_H
