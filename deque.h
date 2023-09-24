/*
 * File: deque.h
 * This file exports a Deque class that creates a Deque data
 * structure.
 */

#ifndef _deque_h
#define _deque_h

/*
 * Class: Deque
 * This class is used to represent a single instance of a Deque 
 * data structure.
 * In this class, elements of the Deque can be integers, which 
 * are added, accessed, and removed from the front and back of 
 * the data structure.
 */
class Deque {
 public:
  /*
   * Constructor: Deque
   * Usage: Deque d;
   * ---------------------------------------
   * Initializes the Deque object to a default empty Deque.
   */
  Deque();
  /*
   * Methods: getFrontOfDeque, getBackOfDeque
   * Usage: d.getFrontOfDeque;
   *        d.getBackOfDeque;
   * -----------------------------------------
   * Returns the element at the front or back of the Deque, respectively.
   */
  Node* getFrontOfDeque();
  Node* getBackOfDeque();
  /*
   * Methods: setFrontOfDeque, setBackOfDeque
   * Usage: d.setFrontOfDeque(n);
   *        d.setBackOfDeque(n);
   * -------------------------------------------
   * Sets the front or back of this deque to the specified Node.
   */
  void setFrontOfDeque(Node* n);
  void setBackOfDeque(Node* n);
  /*
   * Methods: push_front, push_back
   * Usage: d.push_front(i);
   *        d.push_back(i);
   * --------------------------------------------------
   * Pushes the given value to the front or back of the Deque.
   */
  void push_front(int i);
  void push_back(int i);
  /*
   * Methods: pop_front, pop_back
   * Usage: d.pop_front();
   *        d.pop_back();
   * ---------------------------------------------
   * Removes and returns the value at the front or back of the Deque.
   * Returns an error if the Deque is empty.
   */
  int pop_front();
  int pop_back();
  /*
   * Methods: peak_front, peak_back
   * Usage: d.peak_front();
   *        d.peak_back();
   * ----------------------------------------------
   * Returns the value at the front or back of the Deque.
   * Returns an error if the Deque is empty.
   */
  int peak_front();
  int peak_back();
  /*
   * Method: remove_all
   * Usage: d.remove_all();
   * ----------------------------------------------
   * Deletes all elements in the Deque and frees all memory 
   * allocated on the Deque.
   */
  int remove_all();
  /*
   * Deconstructor: ~Deque
   * ----------------------------------------
   * Deletes all elements in the Deque and frees all memory
   * allocated on the Deque when the Deque goes out of scope.
   */
  virtual ~Deque();

 private:
  /*
   * Struct: Node
   * -------------------------------
   * This struct creates Nodes, which hold the values in the Deque
   * object.
   */
  struct Node {
    int val;                //value of each element
    Node* nextNode;         //pointer to next node in the Deque
    Node* previousNode      //pointer to previous node in Deque

    Node(int ci, Node* n);
    Node(Node* n, int ci);

    Node* frontOfDeque;
    Node* backOfDeque;
  };
};
