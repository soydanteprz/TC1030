/*
Dante David Pérez Pérez
A01709226
Project TC1030
10/06/2022
*/
#ifndef MOVIE_H
#define MOVIE_H
#include <string>
#include <iostream>
#include <Content.h>

using namespace std;

class Movie : public Content
{
    public:
        virtual ~Movie();
		Movie(string, string, int, int, float);
		string printInfo() override;
		void setLength(float);
		float getLength();
        bool operator < (const Movie & r1);


    protected:

    private:
        float length;
};

#endif // MOVIE_H
