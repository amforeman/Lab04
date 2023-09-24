/*
 * File: user.h
 * This file exports a User class that holds the information
 * and friends of a user.
 */

#ifndef _user_h
#define user_h

#include <string>
#include <vector>

/*
 * Class: User
 * This class is used to represent a single instance of a user.
 * In this class, the user has a username, email, and a vector
 * of friends.
 * These friends can be added, removed, and accessed but the
 * list will not exceed 100 friends.
 */

class User {
 public:
  /* Member variables */
  std::string userName;
  std::string email;
  std::vector<User*> friendList; //Vector of Users that have been added to the current user's friend list
  /*
   * Constructor: User
   * Usage: User user;
   *        User user(username, email);
   *------------------------------------------
   * Initializes a user object. The username and email are
   * set if specified. The default constructor creates an
   * empty User.
   */
  User();
  User(std::string userName, std::string email);
  /*
   * Method: setUserName
   * Usage: user.setUserName(str);
   *-----------------------------------------
   * Sets the given string as the  username for this user.
   */
  void setUserName(std::string str);
  /*
   * Method: getUserName
   * Usage: std::string username = user.getUserName();
   * ---------------------------------------------
   * Returns the username for this user.
   */
  std::string getUserName();
  /*
   * Method: setEmail
   * Usage: user.setEmail(str);
   *---------------------------------------------
   * Sets the given string as the email for this user.
   */
  void setEmail(std::string str);
  /*
   * Method: getEmail
   * Usage: std::string email = user.getEmail();
   * -----------------------------------------
   * Returns the email for this user.
   */
  std::string getEmail();
  /*
   * Method: addFriend
   * Usage: user.addFriend(user2);
   * --------------------------------------------------
   * Takes a pointer to a user and adds the user to the friendList.
   */
  void addFriend(User* user);
  /*
   * Method: removeFriend
   * Usage: user.removeFriend(str)
   * --------------------------------------------------
   * Takes a string representing a username and removes the
   * corresponding user from the friendList.
   */
  void removeFriend(std::string str);
  /*
   * Method: numFriends
   * Usage: int i = user.numFriends();
   * -----------------------------------------------
   * Returns an int corresponding to the number of friends
   * in the user's friendList.
   */
  int numFriends();
  /*
   * Method: getFriendAt
   * Usage: User* user2 = user.getFriendAt(i);
   * -----------------------------------------------
   * Takes an index and returns a pointer corresponding to the
   * user at the index in friendList.
   */
  User* getFriendAt(int i);
};

#endif
  
