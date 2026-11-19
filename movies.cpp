#include <iostream>
#include <cstring>
#include "movies.h"
using namespace std;


movies::movies(char* newpublisher, int newrating, int newduration, char* newtitle, int newyear) : media(newtitle, newyear){
  publisher = new char[80];
  strcpy(publisher, newpublisher);
  rating = newrating;
  duration = newduration;
}

movies::~movies(){
  delete publisher;
}

void movies::print() {
  cout << "Title: " << title << ", Year: " << year << ", Publisher: " << publisher << ", Rating: " << rating << ", Duration(min): " << duration << endl;
}

int movies::getrating() {
  return rating;
}

int movies::getduration() {
  return duration;
}
char* movies::getpublisher() {
  return publisher;
}
