#ifndef SRC_TREENODE_TPP
#define SRC_TREENODE_TPP

#include "../eAVL/treeNode.h"

template<typename T>
TreeNode<T>::TreeNode(const T &val){
    entry = val;
    count = 1;
    bal = 0;
    leftNode = nullptr;
    rightNode = nullptr;
}

#endif //SRC_TREENODE_TPP

