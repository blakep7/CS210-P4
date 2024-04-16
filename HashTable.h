/**
 * @file HashTable.h
 * @author CS210 Staff
 * @brief This is the header file for HashTable.h.
 * @note This is the interface for the class HashTable, which is a class for a hash table of strings.
 * @note You must complete the function comments, we have only provided the description. You must also
 *       list the parameters, returns, pre and post conditions.
 */
#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "LinkedList.cpp"
#include <string>

using LinkedListNS::Node;
using std::string;

namespace HashTableNS
{
    const int SIZE = 10;
    class HashTable
    {
    public:
        /**
         * @brief Initialize empty hash table
         */
        HashTable();

        /**
         * @brief Destructor destroys hash table
         */
        virtual ~HashTable();

        /**
         * @brief Checks if the target is in the hash table
         */
        bool containsString(string target) const;

        /**
         * @brief Adds a new string to the hash table
         */
        void put(string s);

    private:
        Node<string> *hashArray[SIZE];

        /**
         * @brief Compute hash value for string
         * @note Internal Helper Function
         */
        static int computeHash(string s);

    }; // HashTable
} // HashTableNS
#endif // HASHTABLE_H

