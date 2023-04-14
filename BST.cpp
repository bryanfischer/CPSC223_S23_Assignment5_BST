#include "BST.h"

//you write

void BST::prettyPrint(){
    prettyPrint(root, "+");
}

void BST::prettyPrint(const Node* node, std::string str){
    if(node == nullptr){
        std::cout << str << "\\[nullptr]" << std::endl;
        return;
    }else{
        std::cout << str << "\\[" << node->value << "]" << std::endl;
        str += "-";
        prettyPrint(node->leftChild, str);
        prettyPrint(node->rightChild, str);
    }

}