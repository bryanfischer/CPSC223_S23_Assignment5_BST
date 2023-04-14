#ifndef BST_H
#define BST_H

#include "Node.h"

class BST{

    public:

        //Default constructor
        //
        //set the root to be nullptr
        BST();

        //Parameterized constructor
        //
        //set the root to be a new node with the value val
        //children to nullptr
        BST(int value);

        //Destructor
        //
        //Frees the memory and deletes the tree
        ~BST();

        //Insert
        //
        //Function will insert a new value into the tree in the correct location
        //If a node with the value being inserted already exists, do not modify the tree
        void insert(int value);

        //Remove
        //
        //if the value exists in the tree, remove it. The resulting
        //tree should still be a valid BST
        //if the value doesn't exist in the tree, print a message stating as such
        //and do not modify the tree
        void remove(int value);
        
        //Find
        //
        //print the node with the search value
        //if value doesn't exist in tree, print "Value [x] not found", 
        //otherwise print the node with the toString() override
        void find(int value);

        //Print Pre-order Traversal
        //
        //Root-Left-Right
        void printPreOrder();

        //Print in-order traversal
        //
        //Left-Root-Right
        void printInOrder();
        
        //Print post-order traversal
        //
        //Left-Right-Root
        void printPostOrder();

        //Prints the tree to the terminal
        //
        //Optional way to view the tree to help while coding
        void prettyPrint();

    private:

        //helper functions, many of which use recursion
        void prettyPrint(const Node * node, std::string str);
        void printInOrder(const Node *node);
        void printPreOrder(const Node *node);
        void printPostOrder(const Node *node);

        //Helper function for insert
        //
        //Use helper function inside the insert function to recursively traverse the tree,
        //looking for the appropriate place to insert the value.
        void insert(Node *&node, int value);

        //Find helper function
        //
        //use find helper function to recursively search the tree,
        //looking for the value.
        void find(Node *node, int value);


        //Internal helper function for removing a node
        void remove(int value, Node *&node);

        //finds the minimum value from the tree.
        //if the tree is empty return -1
        int findMin(Node *node);

        //helper function for the destructor to delete the tree in the proper order
        void makeEmpty(Node *&node);

        //the root of the BST
        Node * root;

};

#endif