/*
Dante David Pérez Pérez
A01709226
Project TC1030
10/06/2022
*/
#ifndef DATE_H
#define DATE_H
#include <string>

using namespace std;


class Date
{
    public:
        Date();
        virtual ~Date();
        Date(int, int, int);
		//Getters
		int getDay();
		int getMonth();
		int getYear();

		//Setters
		void setDay(int);
		void setMonth(int);
		void setYear(int);
		string calendar();

    protected:

    private:
        int day;
		int month;
		int year;
};

#endif // DATE_H
