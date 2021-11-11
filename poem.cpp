/*
Author: Evan Huang
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 09
  - Task D.
*/


#include <iostream>

std::string * createAPoemDynamically() {
  std::string *p = new std::string;
  *p = "Roses are red, violets are blue";
  return p;
}

int main() {
    while(true) {
      std::string *p;
      p = createAPoemDynamically();
      delete p;
      // assume that the poem p is not needed at this point
    }
}
