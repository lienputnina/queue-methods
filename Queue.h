#ifndef Queue_h
#define Queue_h

// Declaring the class as a template class
template <class Type> class Queue {

private:
  /*
    Declaring a pointer to a "Type" array, so the array could hold
    different types of data.
  */
  Type *queueArray;
  int arraySize;
  int elementCount;

public:
  Queue(int arraySize);
  ~Queue();

  /*
    Declaring a method with "Type" as a parameter add different types of
    elements to the array.
   */
  void enqueue(Type x);

  /*
    Declaring a method with "Type" to remove elements from arrays with
    different types of data.
  */
  Type dequeue();

  void PrintQueue();
  bool isQueueFull() const; // Method for checking, if the queue is full.
};

#endif