/*
Dante David Pérez Pérez
A01709226
Project TC1030
10/06/2022
*/
#include "Content.h"
#include <iostream>
#include <stdexcept>

using namespace std;

Content::Content(){}

Content::~Content()
{
    //dtor
}

//Setters
void Content::setName(string name){
    this ->name = name;
}

void Content::setGenre(string geren){
	this ->genre = genre;
}

void Content::setId(int id ){
	if(id<0){
		throw invalid_argument("Number not valid");
	}
	else {
		this->id = id;
	}
}

void Content::setRate(int rate){
	if(rate < 0 || rate >5){
		throw invalid_argument("Only values between 0 and 5");
	}
	else{
		this->rate = rate;
	}
}

//Getters
string Content::getName(){
	return name;
}

string Content::getGenre(){
	return genre;
}

int Content::getId(){
	return id;
}

int Content::getRate(){
	return rate;
}


