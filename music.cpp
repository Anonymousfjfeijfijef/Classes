#include <iostream>
#include <cstring>
#include "music.h"
using namespace std;


music::music(char* newpublisher, char* newartist, int newduration, char* newtitle, int newyear) : media(newtitle, newyear){
  publisher = new char[80];
  strcpy(publisher, newpublisher);
  artist = new char[80];
  strcpy(artist, newartist);
  duration = newduration;
}

music::~music(){
  delete artist;
  delete publisher;
}

void music::print(){
  cout << "Title: " << title << ", Year: " << year << ", Publisher: " << publisher << ", Artist: " << artist << ", Duration(min): " << duration << endl;
}

char* music::getartist() {
  return artist;
}

int music::getduration() {
  return duration;
}
char* music::getpublisher() {
  return publisher;
}
