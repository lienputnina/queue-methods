#ifndef Queue_h
#define Queue_h

// Declaring a template class for a generic Queue.
template <class Type> class Queue {

private:
  Type *queueArray; // Pointer to an array of "Type" type = "any" type
  int queueSize;    // Maximum size of the queue.
  int elementCount; // Current number of elements in the queue.

public:
  Queue(int queueSize);
  ~Queue();

  void enqueue(Type x);

  // Method that removes and returns the first element of the queue.
  Type dequeue();

  void PrintQueue();
  bool isQueueFull() const; // Method for checking, if the queue is full.
};

#endif
