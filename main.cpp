# include <iostream>
# include <cstring>
# include <vector>
# include "games.h"
# include "music.h"
# include "movies.h"
# include "media.h"
using namespace std;
int main() {
  vector<media*> v;
  // Initializing variables
  char* usertitle = new char[80];
  int useryear;
  char* userpublisher = new char[80];
  char* userartist = new char[80];
  int userduration;
  int userrating;
  bool end = false;
  // Keep running database until told otherwise
  while (end == false) {
    int response;
    cout << "What would you like to do to the media database(1 for ADD, 2 for SEARCH, 3 for DELETE, 4 for QUIT)? ";
    cin >> response;
    // Checking for each command using if statements
    if (response == 1) {
      char mediatype[80];
      char mediacopyg[80] = "videogames";
      char mediacopymu[80] = "music";
      char mediacopymv[80] = "movies";
      cout << "What type of media is this(videogames, music, movies)? ";
      cin >> mediatype;
      // Checking if input matches with any valid options
      if (strcmp(mediatype, mediacopyg) == 0) {
	// Gathering info
	cout << "What is the title of this videogame? ";
	cin >> usertitle;
	cout << "What is the year this videogame was published? ";
	cin >> useryear;
	cout << "Who is the publisher of this videogame? ";
	cin >> userpublisher;
	cout << "What is the rating(1-10) of this videogame? ";
	cin >> userrating;
	// Creating object
	games* g = new games(userpublisher, userrating, usertitle, useryear);
	v.push_back(g);
      }
      
      else if (strcmp(mediatype, mediacopymu) == 0) {
	// Gathering info
	cout << "What is the title of this song? ";
	cin >> usertitle;
	cout << "What is the year this song was published? ";
	cin >> useryear;
	cout << "Who is the publisher of this song? ";
	cin >> userpublisher;
	cout << "What is the duration(min) of this song? ";
	cin >> userduration;
	cout << "Who is the artist of this song? ";
	cin >> userartist;
	// Creating object
	music* mu = new music(userpublisher, userartist, userduration, usertitle, useryear);
	v.push_back(mu);
      }
      
      else if (strcmp(mediatype, mediacopymv) == 0) {
	// Gathering info
	cout << "What is the title of this movie? ";
	cin >> usertitle;
	cout << "What is the year this movie was published? ";
	cin >> useryear;
	cout << "Who is the publisher of this movie? ";
	cin >> userpublisher;
	cout << "What is the duration(min) of this movie? ";
	cin >> userduration;
	cout << "What is the rating(1-10) of this movie? ";
	cin >> userrating;
	// Creating object
	movies* mv = new movies(userpublisher, userrating, userduration, usertitle, useryear);
	v.push_back(mv);
      } 
    }

    else if (response == 2) {
      int choice;
      cout << "Which type of data do you want to use to search up your media(1 for title, 2 for year)? ";
      cin >> choice;
      // Iterating and checking if title matches
      if (choice == 1) {
	char* choicetitle = new char[80];
	cout << "What is the title of your media? ";
	cin >> choicetitle;
	for (vector<media*>::iterator it = v.begin(); it != v.end(); it ++) {
	  if (strcmp((*it)->gettitle(), choicetitle) == 0){
	    (*it)->print();
	  }
        }
      }
      // Iterating and checking if year matches
      else if (choice == 2) {
	int choiceyear;
	cout << "What is the year of your media? ";
	cin >> choiceyear;
	for (vector<media*>::iterator it = v.begin(); it != v.end(); it ++) {
	  if ((*it)->getyear() == choiceyear){
	    (*it)->print();
	  }
        }
      }
    }

    else if (response == 3) {
      int choices;
      cout << "Which type of data do you want to use to search up and delete your media(1 for title, 2 for year)? ";
      cin >> choices;
      // Iterating and checking if title matches
      if (choices == 1) {
	char* choicestitle = new char[80];
	cout << "What is the title of your media? ";
	cin >> choicestitle;
	for (vector<media*>::iterator it = v.begin(); it != v.end(); it ++) {
	  if (strcmp((*it)->gettitle(), choicestitle) == 0){
	    (*it)->print();
	    int result;
	    // Double checking if they want to delete it
	    cout << "Do you still want to delete this media(1 for yes, 2 for no)? ";
	    cin >> result;
	    if (result == 1) {
	      delete (*it);
	      v.erase(it);
	      break;
	    }
	  }
        }
      }
      else if (choices == 2) {
	int choicesyear;
	cout << "What is the year of your media? ";
	cin >> choicesyear;
	// Iterating and checking if year matches
	for (vector<media*>::iterator it = v.begin(); it != v.end(); it ++) {
	  if ((*it)->getyear() == choicesyear){
	    (*it)->print();
	    int results;
	    // Double checking if they want to delete it
	    cout << "Do you still want to delete this media(1 for yes, 2 for no)? ";
	    cin >> results;
	    if (results == 1) {
	      delete (*it);
	      v.erase(it);
	      break;
	    }
	  }
        }
      }
    }
    // Breaking condition for while when user wants to quit
    else if (response == 4) {
      end = true;
    }
  }
}
