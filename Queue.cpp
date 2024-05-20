// Queue class implementation file
#include "Queue.h"
#include <cstddef>
#include <iostream>
using namespace std;

template <class Type> Queue<Type>::Queue(int queueSize) {

  /*
  Allocating memory for Queue class object. This object will be an array with
  the size the user will provide.
  */
  queueArray = new Type[queueSize]{};
  // Add a more modern check, perhaps
  // Adding a check to see, if the memory is full
  if (queueArray == NULL) {
    cout << "Not enough memory. Program is shutting down." << endl;
  };

  size = queueSize;
  arrayIndex = 0;
};

template <class Type> Queue<Type>::~Queue() {
  /*
 Deallocating the previously reserved memory for the queueArray array
 to prevent a memory leak.
*/
  delete[] queueArray;
};

template <class Type>
void Queue<Type>::enqueue(Type x){
    // some code
};

template <class Type>
Type Queue<Type>::dequeue(){
    // some code
};

template <class Type>
void Queue<Type>::PrintQueue(){
    // some code
};
