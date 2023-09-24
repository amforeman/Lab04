/*
 * File: deque.cpp
 * --------------------------------------------------
 * This file implements the Deque data structure
 */

#include <iostream>
#include "deque.h"
  
  Deque::Deque() {
    frontOfDeque = nullptr;
    backOfDeque = nullptr;
  }

  Deque::Node* Deque::getFrontOfDeque() {
    return frontOfDeque;
  }

  void Deque::setFrontOfDeque(Node* n) {
    frontOfDeque = n;
  }

  Deque::Node* Deque::getBackOfDeque() {
    return backOfDeque;
  }

  void Deque::setBackOfDeque(Node* n) {
    backOfDeque = n;
  }

  void Deque::push_front(int i) {
    Node* newNode = new Node(i, frontOfDeque, nullptr);
    setFrontOfDeque(newNode);
  }

  void Deque::push_back(int i) {
    Node* newNode = new Node(i, nullptr, backOfDeque);
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
      Node* ptrNewBack = backOfDeque->previousNode;

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
    while (getFrontOfDeque() != nullptr && getBackOfDeque() != nullptr) {
      int temp = pop_front();
      int temp2 = pop_back();
    }
  }

  Deque::~Deque() {
    remove_all();
  }
    
