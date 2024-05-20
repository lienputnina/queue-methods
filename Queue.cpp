// Queue class implementation file
#include "Queue.h"
#include <iostream>
using namespace std;

template <class Type> Queue<Type>::Queue(int queueArrayLength) {

  /*
  Allocating memory for Queue class object. This object will be an array with
  the size the user will provide.
  */
  queueArray = new Type[queueArrayLength]{};

  // Adding a check to see, if the memory is full. Mb mention the nullptr
  if (queueArray == nullptr) {
    cout << "Not enough memory. Program is shutting down." << endl;
    exit(1); // Exiting the program if memory allocation fails

    length = queueArrayLength;
    arrayIndex = 0;
  };
};

template <class Type> Queue<Type>::~Queue() {
  /*
 Deallocating the previously reserved memory for the queueArray array
 to prevent a memory leak.
*/
  delete[] queueArray;
};

template <class Type> void Queue<Type>::enqueue(Type newArrayElement){};

template <class Type> Type Queue<Type>::dequeue(){};
