/*
Dante David Pérez Pérez
A01709226
Project TC1030
10/06/2022
*/
#ifndef CONTENT_H
#define CONTENT_H
#include <string>
#include <iostream>

using namespace std;

class Content
{
    public:
        Content();
        virtual ~Content();
		virtual string printInfo() = 0;

		//Setters
		void setName(string);
        void setGenre(string);
        void setId(int);
        void setRate(int);

		//Getters
        string getName();
        string getGenre();
        int getId();
        int getRate();

    protected:
        int id, rate;
		string name, genre;

    private:
};

#endif // CONTENT_H
