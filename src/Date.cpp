/*
Dante David Pérez Pérez
A01709226
Project TC1030
10/06/2022
*/
#include "Date.h"
#include <stdexcept>
#include <string>
#include <iostream>

using namespace std;

Date::Date()
{
    //ctor
}

Date::~Date()
{
    //dtor
}

//CONSTRUCTOR CON PARAMETROS
Date::Date(int day, int month, int year){
	this -> day = day;
	this -> month = month;
	this -> year = year;
}
int Date::getMonth(){
	return month;
}
int Date::getYear(){
	return year;
}
int Date::getDay(){
	return day;
}
void Date::setMonth(int month){
	this -> month = month;
}
void Date::setDay(int day){
	this -> day = day;
}
void Date::setYear(int year){
	this -> year = year;
}
string Date::calendar(){
    string str;
    str += to_string(day) + '/';
    str += to_string(month) + '/';
    str += to_string(year) + '/';
    return str;

}
