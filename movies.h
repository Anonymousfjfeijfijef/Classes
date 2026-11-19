#ifndef Movies
#define Movies
#include <iostream>
#include <cstring>
#include "media.h"
using namespace std;

class movies : public media {
 public:
  // Destructor
  ~movies();
  // Main constructor
  movies(char*, int, int, char*, int);
  // Function that print out all info
  void print();
  // Function to access rating
  int getrating();
  // Function to access duration
  int getduration();
  // Function to access publisher
  char* getpublisher();
  char* publisher;
  int rating;
  int duration;
};

#endif
