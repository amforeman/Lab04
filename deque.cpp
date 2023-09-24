#include <iostream>

class Deque {
  Deque::Node(int ci, Node* n) {
    val = ci;
    nextNode = n;
  }

  Deque::Node(Node* n, int ci) {
    previousNode = n;
    val = ci;
  }
  
  Deque::Deque() {
    frontOfDeque = nullptr;
    backOfDeque = nullptr;
  }

  Node* Deque::getFrontOfDeque() {
    return frontOfDeque;
  }

  void Deque::setFrontOfDeque(Node* n) {
    frontOfDeque = n;
  }

  Node* Deque::getBackOfDeque() {
    return backOfDeque;
  }

  void Deque::setBackOfDeque(Node* n) {
    backOfDeque = n;
  }

  void Deque::push_front(int i) {
    Node* newNode = new Node(i, frontOfDeque);
    setFrontOfDeque(newNode);
  }

  void Deque::push_back(int i) {
    Node* newNode = new Node(backOfDeque, i);
    setBackOfDeque(newNode);
  }

  int Deque::pop_front() {
    if (frontOfDeque != nullptr) {
      int val = frontOfDeque->val;
      Node* ptrNewFront = frontOfDeque->nextNode;

      delete frontOfDeque;
      setFrontOfDeque(ptrNewFront);
      return val;
    }
    std::cout << "Error: Tried popping an empty deque\n";
    return 0;
  }

  int Deque::pop_back() {
    if (backOfDeque != nullptr) {
      int val = backOfDeque->val;
      Node* ptrNewBack = backOfDeque->nextNode;

      delete backOfDeque;
      setBackOfDeque(ptrNewBack);
      return val;
    }
    std::cout << "Error: Tried popping an empty deque\n";
    return 0;
  }

  int Deque::peak_front() {
    if (frontOfDeque != nullptr) {
      return frontOfDeque->val;
    }
    std::cout << "Error: Tried peaking an empty deque\n";
    return 0;
  }

  int Deque::peak_back() {
    if (backOfDeque != nullptr) {
      return backOfDeque->val;
    }
    std::cout << "Error: Tried peaking an empty deque\n";
    return 0;
  }

  void Deque::remove_all() {
    while (getFrontOfDeque() != nullptr && getBackOfDeque != nullptr) {
      int temp = pop_front();
      int temp2 = pop_back();
    }
  }

  Deque::~Deque() {
    remove_all();
  }
};
    
