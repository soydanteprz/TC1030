/*
Dante David Pérez Pérez
A01709226
Project TC1030
10/06/2022
*/
#include "Serie.h"
#include <string>
#include <iostream>
#include <stdexcept>

using namespace std;

Serie::Serie(string name , string genre, int id, int rate, Episode cap, int season, Date release)
{
    this -> name = name;
	this -> genre = genre;
	this -> id = id;
	this -> rate = rate;
	this -> cap = cap;
	this -> season = season;
	this -> release = release;
}

Serie::~Serie()
{
    //dtor
}
string Serie::printInfo(){

	string msg;
	msg += "Serie: " + name;
	msg += "\nGenero: " + genre;
	msg += "\nID: " + to_string(id);
	msg += "\nRating: " + to_string(rate);
	msg += "\nEpisode: " + to_string(cap.getNum()) + " duration: " + to_string(cap.getDuration()) + " minutes";
	msg += "\nSeason: " + to_string(season) +'\n';
	msg += "Release date: " + to_string(release.getDay()) + '/' + to_string(release.getMonth()) + '/' + to_string(release.getYear());
	return msg;
}
