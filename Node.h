/*
*   File: Node.h
*   Author:
*   Date Modified:
*   Description:
*/

#ifndef Node_H
#define Node_H

#include<iostream>
#include<string>

class Node{

    public:

        //Default Constructor
        //
        //Set the value to -1, left and right child pointers to nullptr
        Node();

        //Parameterized Constructor
        //
        //Set the value to val, left and right child pointers to nullptr
        Node(const int val);

        //Operator overloading <
        //
        //returns true if this value is less than the node parameter's value, else returns false
        bool operator<(const Node &node);

        //Operator overloading >
        //
        //returns true if this value is greater than the node parameter's value, else returns false
        bool operator>(const Node &node);

        //Operator overloading ==
        //
        //returns true if this value is equal to the node parameter's value, else returns false
        bool operator==(const Node &node);

        //Prints the node attributes
        std::string toString();

        //Data Members
        int value;
        Node * leftChild;
        Node * rightChild;
        
};

#endif