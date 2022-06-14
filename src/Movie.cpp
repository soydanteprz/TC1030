/*
Dante David Pérez Pérez
A01709226
Project TC1030
10/06/2022
*/
#include "Movie.h"

using namespace std;


Movie::Movie(string name , string genre, int id, int rate, float length)
{
    this -> name = name;
	this -> genre = genre;
	this -> id = id;
	this -> rate = rate;
	this -> length = length;
}

Movie::~Movie()
{
    //dtor
}

string Movie::printInfo(){
	string msg;
	msg += "Movie: " + name;
	msg += "\nGenero:  " + genre;
	msg += "\nID: " + to_string(id);
	msg += "\nRating: " + to_string(rate);
	msg += "\nLength of the movie: " + to_string(length) + " minutes\n";
	return msg;
}

float Movie::getLength(){
	return length;
}

void Movie::setLength(float lenght){
	if (length < 0){
		throw invalid_argument("That number is invalid");
	}
	else {
		this -> length = length;
	}
}


//Operator overloading
bool Movie::operator< (const Movie & r1){
    if(rate<r1.rate){
        return true;
    }
    return false;
}

