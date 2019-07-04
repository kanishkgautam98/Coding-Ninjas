//
// Created by Kanishk Gautam on 2019-07-03.
//

#ifndef CODING_NINJAS_BST_H
#define CODING_NINJAS_BST_H

#endif //CODING_NINJAS_BST_H

template <typename T>
class BST{
    BinaryTreeNode<int>*root;

public:

    BST(){
        root = NULL;
    }

    ~BST(){
        delete root;
    }

    bool hasData(BinaryTreeNode<T>*root, T data){
        if(root == NULL){
            return false;
        }
        if(root->data == data){
            return true;
        }
        if(root->data > data){
            return hasData(root->left);
        }
        if(root->data  < data){
            return hasData(root->right);
        }

    }

    bool hasData(T data){
        return hasData(root,data);

    }
};
