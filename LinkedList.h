/**
 * @file LinkedList.h
 * @author CS210 Staff
 * @brief This is the header file LinkedList.h
 * @note This contains type definitions and function declarations for manipulating a linked
 *       list to store data of any type (T). The linked list is given as a pointer of type
 *       Node<T>* which points to the head (first) node of the list. The implementation of
 *       the functions are given in the file "LinkedList.cpp"
 */
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

namespace LinkedListNS
{
    template<class T>
    class Node {

    public:
        Node(const T& theData, Node<T>* theLink) : data(theData), link(theLink)
        {}
        Node<T>* getLink( ) const { return link; }
        const T& getData( ) const { return data; }
        void setData(const T& theData) { data = theData; }
        void setLink(Node<T>* pointer) { link = pointer; }
    private:
        T data;
        Node<T>* link;

    };

    /**
     * @brief Insert's data at the head of the list.
     *
     * @tparam T Type of the data to be inserted
     * @param head Pointer to the head of the list
     * @param theData Data to be inserted
     *
     * @pre The pointer variable head points to the head of a linked list
     * @post A new node containing theData has been added at the head of the linked list
     */
    template<class T>
    void headInsert(Node<T>*& head, const T& theData);

    /**
     * @brief Insert's data after the specified node.
     *
     * @tparam T Type of the data to be inserted
     * @param afterMe Pointer to the node to insert the data after
     * @param theData Data to be inserted
     *
     * @pre afterMe points to a node in a linked list
     * @post A new node containing theData has been added after the node pointed to
     *       by afterMe
     */
    template<class T>
    void insert(Node<T>* afterMe, const T& theData);

    /**
     * @brief Deletes the node in the list after the supplied node.
     *
     * @tparam T Type of data held in the list
     * @param before Node before the node to be deleted
     *
     * @pre The pointer "before" points to nodes that have at least one node after it in
     *      the linked list
     * @post The node after the node pointed to by "before" has been removed from the linked
     *       list and its storage returned to the free-store
     */
    template<class T>
    void deleteNode(Node<T>* before);

    /**
     * @brief Deletes the first node in the list.
     *
     * @tparam T Type of data held in the list
     * @param head First node in the list (i.e node to be removed)
     *
     * @pre The pointers head points to the first node in a linked list; with at least one node
     * @post The node pointed to by head has been removed from the linked list and its storage
     *       returned to the freestore
     */
    template<class T>
    void deleteFirstNode(Node<T>*& head);

    /**
     * @brief Searches for and returns a node in the linked list
     *
     * @tparam T Type of data held in the list
     * @param head Head node of the linked list
     * @param target Item being searched for
     * @return Pointer that points to the node containing target
     *
     * @pre The pointer head points to the head of a linked list. The pointer variable in the
     *      last node is NULL. Head (first) node has been defined for type T.
     * @post If the list is empty, then head is NULL. Returns a pointer that points to the first
     *       node that is equal to the target. If no node equals the target, the function returns
     *       NULL.
     * @note == is used as the criterion for being equal
     */
    template<class T>
    Node<T>* search(Node<T>* head, const T& target);

}//LinkedListNS

#endif //LINKEDLIST_H

