/*
Dante David Pérez Pérez
A01709226
Project TC1030
10/06/2022
*/
#include "Episode.h"
#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

Episode::~Episode()
{
}

Episode::Episode()
{
	num = 0;
	duration = 0;
}

Episode::Episode(int num, float duration){
	this -> num = num;
	this -> duration = duration;
}

//setters
void Episode::setNum(int num){
	if (num < 0){
		throw invalid_argument("That number is invalid");
	}
	else {
		this -> num = num;
	}
}

void Episode::setDuration(float duration){
		if (duration < 0){
		throw invalid_argument("That number is invalid");
	}
	else {
		this -> duration = duration;
	}
}

//getters
int Episode::getNum(){
	return num;
}

float Episode::getDuration(){
	return duration;
}

string Episode::getInfo(){
    string str;
    str += "numero: " + to_string(num);
    str += "duracion: " + to_string(duration);
    return str;

}
