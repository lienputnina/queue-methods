#include "Queue.h"
#include <iostream>
using namespace std;

/*
Need to write this line before every method implementation. This signifies that
all of them are template methods. Otherwise the compiler won't know and will
complain.
*/
template <class Type> Queue<Type>::Queue(int queueArraySize) {

  queueSize = queueArraySize;
  elementCount = 0;

  // Allocating memory for the queue array.
  queueArray = new Type[queueArraySize];

  // Checking, if the memory allocation was successful.
  if (queueArray == nullptr) {
    cout << "Not enough memory. Program is shutting down." << endl;
    exit(1); // Exiting the program, if memory allocation fails.
  };
};

// Destructor to deallocate memory and prevent memory leaks.
template <class Type> Queue<Type>::~Queue() { delete[] queueArray; };

// Checking, if the queue is full.
template <class Type> bool Queue<Type>::isQueueFull() const {
  return elementCount >= queueSize;
}

template <class Type> void Queue<Type>::enqueue(Type x) {
  if (isQueueFull()) {
    cout << "Queue is full. Cannot add any more elements." << endl;
  } else {
    /*
    Adding a new element at the curent position of elementCount. If the position
    is 0, the element will be the first, if 1 - second, etc.
    */
    queueArray[elementCount++] = x;
  };
};

template <class Type> Type Queue<Type>::dequeue() {
  if (elementCount == 0) {
    cout << "Queue is empty. Nothing to remove." << endl;
    cout << "\n";

    // Returning the default value of Type, if the queue is empty.
    return Type();
  } else {
    /*
      First element of the queueArray. It needs to be specified and saved, so
      the program would know, which one to remove/which one has been removed.
    */
    Type removedElement = queueArray[0];

    /*
    Shifting array elements to the left to fill the gap from deleting the first
    element.
    queueSize - 1 => the element before the last element (penultimate element).
    The current element of the queueArray gets the value of the next one, thus
    shifting everything to the left.
    */
    for (int i = 0; i < queueSize - 1; i++) {
      queueArray[i] = queueArray[i + 1];
    };

    elementCount--; // decreasing the amount of element spaces.

    return removedElement;
  };
};

template <class Type> void Queue<Type>::PrintQueue() {
  for (int i = 0; i < queueSize; i++) {
    cout << queueArray[i] << " ";
  };
  cout << "\n";
};

/*
Explicitly instantiating the template class to avoid compilation errors.
*/
template class Queue<int>;
template class Queue<float>;
template class Queue<char>;
