#ifndef SRC_EAVL_TPP
#define SRC_EAVL_TPP

# include "../eAVL/eAVL.h"

using namespace std;

template <typename T>
AVLTree<T>::AVLTree() { root = nullptr;}

template <typename T>
void AVLTree<T>::insert(const T& x) {
    bool h = false;
    searchInsert(x, root, h);
}

template <typename T>
void AVLTree<T>::remove(const T& x) {
    bool h = false;
    deleteNode(x, root, h);
}

template <typename T>
void AVLTree<T>::inorder() const {
    inorderTraversal(root);
    cout << endl;
}

#endif // !SRC_EAVL_TPP