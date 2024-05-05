#include "Binarytree.cpp"

using namespace std;

int main() {
    BinaryTree<int> tree;

    tree.insertNode(80);
    tree.insertNode(10);
    tree.insertNode(60);
    tree.insertNode(90);
    tree.insertNode(30);
    tree.insertNode(40);
    tree.insertNode(20);
    cout << "Preorder traversal: ";
    tree.preOrder();
    cout << "Inorder traversal: ";
    tree.inOrder();
    cout << "Postorder traversal: ";
    tree.postOrder();

    return 0;
}

