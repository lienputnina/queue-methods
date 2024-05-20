#ifndef Queue_h
#define Queue_h

// Declaring the template type to make this class a template class
template <class Type>

class Queue {

private:
  /*
    Declaring a pointer to an object of the generic type "Type".
    This will later be used as a pointer to an array
  */
  Type *queueArray;
  int size;
  int arrayIndex;

public:
  Queue(int size);
  ~Queue();

  void enqueue(Type x);

  /*
    Declaring a method with "Type" to use for removing elements from a "Type"
    object.
  */
  Type dequeue();

  void PrintQueue();
};

#endif