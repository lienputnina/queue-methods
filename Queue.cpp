#include "Queue.h"
#include <iostream>
using namespace std;

template <class Type> Queue<Type>::Queue(int queueArraySize) {

  arraySize = queueArraySize;
  elementCount = 0;
  /*
  Allocating memory for Queue class object. This object will be an array with
  the size the user will provide.
  */
  queueArray = new Type[queueArraySize];

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
  return elementCount >= arraySize;
}

template <class Type> void Queue<Type>::enqueue(Type x) {
  // Checking, if the array is full to see whether a new element can be added
  if (isArrayFull()) {
    cout << "Queue is full. Cannot add any more elements." << endl;
  } else {
    /*
    Adding a new element at the curent position of arrayIndex.
    If arrayIndex = 0, the element is added to position 0 (first), if arrayIndex
    = 1, the element is added to second position, etc. (write this better)
    */
    queueArray[elementCount++] = x;
  };
};

template <class Type> Type Queue<Type>::dequeue() {
  if (elementCount == 0) {
    cout << "Queue is empty. Nothing to remove." << endl;
    cout << "\n";
    return Type(); // Return default value of Type - why?
  } else {

    // Storing the element to remove to prevent memory leaks?
    Type removedElement = queueArray[0];

    /*
    Shifting array elements to the left to "delete" the first element and fill
    the gap
    */
    for (int i = 0; i < arraySize - 1; i++) {
      queueArray[i] = queueArray[i + 1];
    };

    elementCount--;

    return removedElement;
  };
};

template <class Type> void Queue<Type>::PrintQueue() {
  for (int i = 0; i < arraySize; i++) {
    cout << queueArray[i] << " ";
  };
  cout << "\n";
};
