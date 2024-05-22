#ifndef Queue_h
#define Queue_h

// Pushing to remote

// Declaring the template type to make this class a template class
template <class Type> class Queue {

private:
  /*
    Declaring a pointer to an object of the generic type "Type".
    This will later be used as a pointer to an array
  */
  Type *queueArray;
  int arraySize;
  int elementCount;

public:
  Queue(int arraySize);
  ~Queue();

  /*
     Declaring a method with "Type" as a parameter to work with different array
     types!
   */
  void enqueue(Type x);

  /*
    Declaring a method with "Type" to use for removing elements from a "Type"
    object. to work with different array types!
  */
  Type dequeue();

  void PrintQueue();
  bool isArrayFull() const; // Method for checking, if the array is full
};

#endif