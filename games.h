#ifndef Games
#define Games
#include <iostream>
#include <cstring>
#include "media.h"
using namespace std;

class games : public media {
 public:
  // Destructor that overrides parent
  ~games();
  // Main contructor
  games(char*, int, char*, int);
  // Function to print out info
  void print();
  // Function to access rating
  int getrating();
  // Function to access publsiher
  char* getpublisher();
  char* publisher;
  int rating;
};

#endif
