#include <iostream>
#include <cstring>
#include "media.h"
using namespace std;


media::media(char* newtitle, int newyear){
  title = new char[80];
  strcpy(title, newtitle);
  year = newyear;
}

media::~media(){
  delete title;
}

void media::print(){
}

int media::getyear() {
  return year;
}

char* media::gettitle() {
  return title;
}
