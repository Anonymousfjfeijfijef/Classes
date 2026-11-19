#ifndef Media
#define Media
#include <iostream>
#include <cstring>
using namespace std;

class media {
 public:
  // Destructor
  virtual ~media();
  // Making sure print function in children override
  virtual void print();
  // Main constructor
  media(char*, int);
  // Function to check year
  int getyear();
  // Function to check title
  char* gettitle();
 protected:
  // Variables that children use to print
  char* title;
  int year;
};

#endif
