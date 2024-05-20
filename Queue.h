#ifndef Queue_h
#define Queue_h

// Declaring the template type to make this class a template class
template <class Type> class Queue {

private:
  /*
    Declaring a pointer to an object of the generic type "Type".
    This will later be used as a pointer to an array
  */
  Type *queueArray;
  int length;
  int arrayIndex;

public:
  Queue(int size);
  ~Queue();

  void enqueue(Type newArrayElement);

  /*
    Declaring a method with "Type" to use for removing elements from a "Type"
    object.
  */
  Type dequeue();

  void PrintQueue();
};

#endif