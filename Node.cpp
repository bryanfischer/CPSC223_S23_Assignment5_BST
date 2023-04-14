/*
*   File: Node.cpp
*   Author:
*   Date Modified:
*   Description:
*/

#include "Node.h"

Node::Node(){

}

Node::Node(const int val){

}

bool Node::operator<(const Node &node){

    return false;
}

bool Node::operator>(const Node &node){

    return false;
}

bool Node::operator==(const Node &node){

    return false;
}

std::string Node::toString(){

    std::string str = "";
    str += "--------------------\n";
    str += "Node value: [" + std::to_string(value) + "]\n";

    if(leftChild == nullptr){
        str += "leftChild: [nullptr]\n";
    }else{
        str += "leftChild: [" + std::to_string(leftChild->value) + "]\n";
    }

    if(rightChild == nullptr){
        str += "rightChild: [nullptr]\n";
    }else{
        str += "rightChild: [" + std::to_string(rightChild->value) + "]\n";
    }
    str += "--------------------\n";
    return str;

}