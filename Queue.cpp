// Queue class implementation file
#include "Queue.h"
#include <iostream>
using namespace std;

template <class Type> Queue<Type>::Queue(int queueArrayLength) {

  length = queueArrayLength;
  arrayIndex = 0;
  /*
  Allocating memory for Queue class object. This object will be an array with
  the size the user will provide.
  */
  queueArray = new Type[queueArrayLength];

  // Adding a check to see, if the memory is full. Mb mention the nullptr
  if (queueArray == nullptr) {
    cout << "Not enough memory. Program is shutting down." << endl;
    exit(1); // Exiting the program if memory allocation fails
  };
};

template <class Type> Queue<Type>::~Queue() {
  /*
 Deallocating the previously reserved memory for the queueArray array
 to prevent a memory leak.
*/
  delete[] queueArray;
};

template <class Type> bool Queue<Type>::isArrayFull() const {
  return arrayIndex == length;
}

template <class Type> void Queue<Type>::enqueue(Type newArrayElement) {
  // Checking, if the array is full to see whether a new element can be added
  if (isArrayFull()) {
    cout << "Queue is full" << endl;
    return;
  } else {
    /*
    Adding a new element at the curent position of arrayIndex.
    If arrayIndex = 0, the element is added to position 0 (first), if arrayIndex
    = 1, the element is added to second position, etc. (write this better)
    */
    queueArray[arrayIndex++] = newArrayElement;
  }
};

template <class Type> Type Queue<Type>::dequeue() {
  if (length == 0) {
    cout << "Queue empty. Nothing to remove" << endl;
  } else {
    /*
    Iterating through the array and assigning the value of the next element to
    the current element. This will shift all elements to the left, essentially
    "deleting" the first element.
    */
    for (int i = 0; i < length - 1; i++) {
      queueArray[i] = queueArray[i + 1];
    }
  }
};
