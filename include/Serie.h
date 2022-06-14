/*
Dante David Pérez Pérez
A01709226
Project TC1030
10/06/2022
*/
#ifndef SERIE_H
#define SERIE_H
#include <string>
#include <iostream>
#include <Content.h>
#include "Episode.h"
#include "Date.h"

using namespace std;

class Serie : public Content
{
    public:
		Serie();
		Serie(string, string, int, int, Episode, int, Date);
		~Serie();

		string printInfo() override;

		void setSeason(int);
		int getSeaon();

		Episode getCap();
		void setCap(Episode);

		Date getRelease();
		void setRelease(Date);


    protected:

    private:
        Episode cap;
		int season;
		Date release;

};

#endif // SERIE_H
