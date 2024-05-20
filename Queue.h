#ifndef Queue_h
#define Queue_h

template <class Type>

class Queue {

private:
  Type *queueArray;
  int size;
  int arrayIndex;

public:
  Queue(int size);
  ~Queue();

  void enqueue(Type x);
  Type dequeue();
  void PrintQueue();
};

#endif