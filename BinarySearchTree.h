/**
 * @file BinarySearchTree.h
 * @author CS210 Staff
 * @brief Header file for BinaryBinarySearchTree.cpp
 * @note The only way to insert data in a tree is with the insert function, thus
 *       satisfying the BST rule giving it a well behaved ordering to the type T.
 */
#ifndef BINARY_SEARCH_TREE_H
#define BINARY_SEARCH_TREE_H

/**
 * @note For std::cout
 */
#include <iostream>

namespace BST_NS
{
    template<class T>
    class BinarySearchTree; //forward declaration

    /**
     * @brief A class designed to create Nodes for a Binary Tree Data Structure
     * @note Each Node holds data of type T and a left and right pointer
     * @tparam T Type of data held in nodes
     */
    template<class T>
    class TreeNode {

    public:
        TreeNode( ) : data(NULL), leftLink(NULL), rightLink(NULL) {}
        TreeNode(T theData, TreeNode<T>* left, TreeNode<T>* right)
                : data(theData), leftLink(left), rightLink(right) {}
        friend class BinarySearchTree<T>;

    private:
        T data;
        TreeNode<T>* leftLink;
        TreeNode<T>* rightLink;

    };

    /**
     * @brief A class that describes the functions for a Binary Search Tree
     * @tparam T Type of data stored in the nodes of the BST
     * 
     * @note You must supply the pre and post conditions for each method
     */
    template<class T>
    class BinarySearchTree {

    private:
        TreeNode<T> *root;
        int tree_size;

    public:
        /**
         * @brief Default Constructor
         *
         * @pre 
         * @post 
         */
        BinarySearchTree() : root(NULL), tree_size(0) {}

        /**
         * @brief Copy Constructor
         *
         * @param other Tree to be copied
         *
         * @pre 
         * @post 
         */
        BinarySearchTree(const BinarySearchTree& other);

        /**
         * @brief Virtual Destructor
         *
         * @pre 
         * @post 
         */
        virtual ~BinarySearchTree();

        /**
         * @brief Insert an item to the tree
         *
         * @param item Item to be inserted into the BST
         * @tparam T Type of item stored within the BST Nodes.
         *
         * @pre 
         * @post 
         */
        void insert(T item);

        /**
         * @brief Remove an item from the tree
         *
         * @param item Item to be removed from the BST
         * @tparam T Type of item stored within the BST Nodes.
         *
         * @pre 
         * @post 
         */
        void remove(T item);

        /**
         * @brief Checks if an item exists in the tree
         *
         * @param item Item to be checked for
         * @return True if item is in tree, false otherwise
         * @tparam T Type of item stored within the BST Nodes.
         *
         * @pre 
         * @post 
         */
        bool inTree(T item) const;

        /**
         * @brief Overloading the assignment operator
         *
         * @param other Item to be copied
         * @return Reference to a BST that has been copied
         *
         * @pre 
         * @post 
         */
        BinarySearchTree& operator=(const BinarySearchTree other);

        /**
         * @brief Empty the tree
         *
         * @pre 
         * @post 
         */
        void makeEmpty();

        /**
         * @brief Pre-Order Traversal (Prints to stdout)
         *
         * @pre 
         * @post 
         */
        void preOrderShow() const;

        /**
         * @brief In-Order Traversal (prints to stdout)
         *
         * @pre 
         * @post 
         */
        void inOrderShow() const;

        /**
         * @brief Post-Order Traversal (prints to stdout)
         *
         * @pre 
         * @post 
         */
        void postOrderShow() const;

        /**
         * @brief Return the size of the tree
         *
         * @return Integer representing the size of the tree
         *
         * @pre 
         * @post 
         */
        int size() const;

        /**
         * @brief Return height of the tree
         *
         * @return Integer representing the height of the tree
         *
         * @pre 
         * @post 
         */
        int height();

    };

}
#endif
