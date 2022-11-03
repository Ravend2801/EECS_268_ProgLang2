/* -----------------------------------------------------------------------------
 *
 * File Name: Node.h
 * Author: Raven Duong
 * KU ID: 3052436
 * Assignment:   EECS-268 Lab 08
 * Description:  This program will time various methods from the data structures.
 * Date Last modified: 11/16/2021
 *
 ---------------------------------------------------------------------------- */
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Node
{
public:
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post build the node and foist value
       * @return none
       **/

       Node(T entry);
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post delete node
       * @return none
       **/

       ~Node();
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre have a value
       * @post none
       * @return return the value
       **/

       T getEntry() const;
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post foist entry to node
       * @return none
       **/
       void setEntry(T entry);

       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post none
       * @return return value
       **/

       Node<T> *getNext() const;
       /** Here's an example of a doxygen comment block. Do this for all methods
       * @pre none
       * @post foist the value
       * @return none
       **/

       void setNext(Node<T> *next);

private:
       T m_entry;
       Node<T> *m_next;
};

#endif
