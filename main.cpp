#include "Queue.h"

#include <iostream>
using namespace std;

int main() {
  Queue<int> IntegerQueue(5);
  Queue<float> FloatQueue(5);
  Queue<char> CharacterQueue(5);

  cout << "Trying to delete the first element of the IntegerQueue:" << endl;
  IntegerQueue.dequeue();

  cout << "Adding elements to the IntegerQueue:" << endl;
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
  cout << "\n";

  cout << "Deleting the first element of the IntegerQueue:" << endl;
  IntegerQueue.dequeue();

  cout << "IntegerQueue after deleting the first element:" << endl;
  IntegerQueue.PrintQueue();
  cout << "\n";

  cout << "--------------" << endl;
  cout << "\n";

  cout << "Trying to delete the first element of the FloatQueue:" << endl;
  FloatQueue.dequeue();

  cout << "Adding elements to the FloatQueue:" << endl;
  FloatQueue.enqueue(1.11);
  FloatQueue.enqueue(2.22);
  FloatQueue.enqueue(3.33);
  FloatQueue.enqueue(4.44);
  FloatQueue.enqueue(5.55);

  cout << "FloatQueue has the following elements:" << endl;
  FloatQueue.PrintQueue();
  cout << "\n";

  cout << "Trying to add more elements to the FloatQueue:" << endl;
  FloatQueue.enqueue(6);
  cout << "\n";

  cout << "FloatQueue has the following elements:" << endl;
  FloatQueue.PrintQueue();
  cout << "\n";

  cout << "Deleting the first element of the FloatQueue:" << endl;
  FloatQueue.dequeue();

  cout << "FloatQueue after deleting the first element:" << endl;
  FloatQueue.PrintQueue();
  cout << "\n";

  cout << "--------------" << endl;

  cout << "Trying to delete the first element of the CharacterQueue:" << endl;
  CharacterQueue.dequeue();

  cout << "Adding elements to the CharacterQueue:" << endl;
  CharacterQueue.enqueue('a');
  CharacterQueue.enqueue('b');
  CharacterQueue.enqueue('c');
  CharacterQueue.enqueue('d');
  CharacterQueue.enqueue('e');

  cout << "CharacterQueue has the following elements:" << endl;
  CharacterQueue.PrintQueue();
  cout << "\n";

  cout << "Trying to add more elements to the CharacterQueue:" << endl;
  CharacterQueue.enqueue('f');
  cout << "\n";

  cout << "CharacterQueue has the following elements:" << endl;
  CharacterQueue.PrintQueue();
  cout << "\n";

  cout << "Deleting the first element of the CharacterQueue:" << endl;
  CharacterQueue.dequeue();

  cout << "CharacterQueue after deleting the first element:" << endl;
  CharacterQueue.PrintQueue();

  return 0;
}