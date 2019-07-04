//
// Created by Kanishk Gautam on 2019-07-03.
//

class isBSTreturn{
public:
    bool isBST;
    int minimum;
    int maximum;
};



bool isBSTi(BinaryTreeNode<int>* root){
    isBSTreturn output;
    if(root == NULL){
        output.isBST = true;
        output.minimum = INT_MAX;
        output.maximum = INT_MIN;
        return output;
    }

    isBSTreturn left = isBSTi(root->left);
    isBSTreturn right = isBSTi(root->right);
    output.minimum = min(root->data,min(left.minimum,right.minimum));
    output.maximum = max(root->data, max(left.maximum, right.maximum));
    output.isBST = (root->data > left.maximum) && (root->data <= right.minimum) && (left.isBST) && (right.isBST);

    return output;





}



