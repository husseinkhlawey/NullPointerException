#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/*
    A linked list class I wrote for 2404 a while back.
*/

#include <iostream>
using namespace std;

//the template linkedlist class
template <class T>
class LinkedList {

  //for overriding the << operator
  template <class U>
  friend ostream& operator << (ostream&, LinkedList<U>&);

  //each node in the list
  class Node {
    friend class LinkedList;
    T* data;
    Node* next;
  };

  private:
    Node* head;

  public:
    LinkedList();
    ~LinkedList();
    int size() const; //size of list
    T* operator [] (int); //index operator
    LinkedList& operator += (T*); //add
    LinkedList& operator -= (T*); //remove
};

template <class T>
ostream& operator << (ostream& output, LinkedList<T>& l) {
  for (int i = 0; i < l.size(); i++)  {
    output << (*(l[i]));
  }
  return output;
}

template <class T>
LinkedList<T>& LinkedList<T>::operator -= (T* elem) {
  Node *currNode, *prevNode;

  currNode = head;
  prevNode = 0;

  while (currNode != 0) {
    if (currNode->data == elem)
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (currNode == 0)
    return *this;

  if (prevNode == 0) {
    head = currNode->next;
  }
  else {
    prevNode->next = currNode->next;
  }

  delete currNode;

  return *this;
}

template <class T>
LinkedList<T>& LinkedList<T>::operator += (T* newElem) {
  Node *currNode, *prevNode;
  Node* newNode = new Node;
  newNode->data = newElem;
  newNode->next = 0;

  currNode = head;
  prevNode = 0;

  while (currNode != 0) {
    if (*(newNode->data) < *(currNode->data))
      break;
    prevNode = currNode;
    currNode = currNode->next;
  }

  if (prevNode == 0) {
    head = newNode;
  }
  else {
    prevNode->next = newNode;
  }

  newNode->next = currNode;

  return *this;
}

template <class T>
T* LinkedList<T>::operator [] (int i) {
  if(i < 0 || i > (size()-1)) {
      return 0;
  } else {

      Node *currNode = head;

      for (int j = 0; j < i; j++) {
          currNode = currNode->next;
      }

      return currNode->data;
  }
}

template <class T>
int LinkedList<T>::size() const {
  Node *currNode = head;
  int size = 0;

  while (currNode != 0) {
    currNode = currNode->next;
    size++;
  }

  return size;
}

template <class T>
LinkedList<T>::~LinkedList() {
  Node *currNode, *nextNode;

  currNode = head;

  while (currNode != 0) {
    nextNode = currNode->next;
    delete currNode->data;
    delete currNode;
    currNode = nextNode;
  }
}

template <class T>
LinkedList<T>::LinkedList() : head(0) {
}

#endif // LINKEDLIST_H
