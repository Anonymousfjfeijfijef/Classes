#ifndef Music
#define Music
#include <iostream>
#include <cstring>
#include "media.h"
using namespace std;

class music : public media {
 public:
  // Destructor
  ~music();
  // Main constructor
  music(char*, char*, int, char*, int);
  // Function to print out all info
  void print();
  // Function to access artist
  char* getartist();
  // Function to access duration
  int getduration();
  // Function to access publisher
  char* getpublisher();
  char* publisher;
  char* artist;
  int duration;
};

#endif
