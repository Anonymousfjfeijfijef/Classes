#include <iostream>
#include <cstring>
#include "games.h"
using namespace std;


games::games(char* newpublisher, int newrating, char* newtitle, int newyear) : media(newtitle, newyear){
  publisher = new char[80];
  strcpy(publisher, newpublisher);
  rating = newrating;
}

games::~games(){
  delete publisher;
}

void games::print() {
  cout << "Title: " << title << ", Year: " << year << ", Publisher: " << publisher << ", Rating: " << rating << endl;
}

int games::getrating() {
  return rating;
}

char* games::getpublisher() {
  return publisher;
}
