#include "Queue.cpp"
#include "Queue.h"

#include <iostream>
using namespace std;

int main() {
  Queue<int> IntegerQueue(5);
  Queue<float> FloatQueue(10);
  Queue<char> CharacterQueue(15);

  cout << "Adding elements to IntegerQueue:" << endl;
  IntegerQueue.enqueue(1);
  IntegerQueue.enqueue(2);
  IntegerQueue.enqueue(3);
  IntegerQueue.enqueue(4);
  IntegerQueue.enqueue(5);

  cout << "IntegerQueue has the following elements:" << endl;
  IntegerQueue.PrintQueue();
  cout << "\n";

  cout << "Trying to add more elements to IntegerQueue:" << endl;
  IntegerQueue.enqueue(6);
  cout << "\n";

  cout << "IntegerQueue has the following elements:" << endl;
  IntegerQueue.PrintQueue();
}