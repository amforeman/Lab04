/* 
 * File: user.cpp
 * -----------------------------------------
 * This file implements the User class.
 */

#include <iostream>
#include <string>
#include <vector>
#include "user.h"

User::User() {
  //Empty
}

User::User(std::string username, std::string email) {
  setUserName(username);
  setEmail(email);
}

void User::setUserName(std::string str) {
  userName = str;
}

std::string User::getUserName() {
  return userName;
}

void User::setEmail(std::string str) {
  email = str;
}

std::string User::getEmail() {
  return email;
}

void User::addFriend(User* user) {
  friendList.push_back(user);
}

void User::removeFriend(std::string str) {
  for (int i = 0; i < friendList.size(); i++) {
    if (friendList[i]->userName == str) {
      friendList.erase(friendList.begin() + i);
    }
  }
}

int User::numFriends() {
  int count = 0;
  for (int i = 0; i < friendList.size(); i++) {
    if (friendList[i] != nullptr){
      count++;
    }
  }
  return count;
}

User* User::getFriendAt(int i) {
  return friendList[i];
}
