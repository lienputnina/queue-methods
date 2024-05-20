// Queue class implementation file
#include "Queue.h"
#include <cstddef>
#include <iostream>
using namespace std;

template <class Type> Queue<Type>::Queue(int queueSize) {
  queueArray = new Type[queueSize];
  // Add a more modern check, perhaps
  if (queueArray == NULL) {
    cout << "Not enough memory. Program is shutting down." << endl;
  };

  size = queueSize;
  arrayIndex = 0;
};

template <class Type> Queue<Type>::~Queue() { delete[] queueArray; };

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
