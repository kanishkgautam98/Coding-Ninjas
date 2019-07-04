//
// Created by Kanishk Gautam on 2019-06-30.
//

#ifndef CODING_NINJAS_BINARYTREENODE_H
#define CODING_NINJAS_BINARYTREENODE_H

#endif //CODING_NINJAS_BINARYTREENODE_H

template<typename T>
class BinaryTreeNode{
public:
    T data;
    BinaryTreeNode* left;
    BinaryTreeNode* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~BinaryTreeNode(){
        delete left;
        delete right;
    }
};
