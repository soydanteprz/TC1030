/*
Dante David Pérez Pérez
A01709226
Project TC1030
10/06/2022
*/
#ifndef EPISODE_H
#define EPISODE_H
#include <string>

using namespace std;


class Episode
{
    public:
        Episode(int, float);
        Episode();
        virtual ~Episode();

		//Setters
		void setNum(int);
		void setDuration(float);

		//Getters
		int getNum();
		float getDuration();

		string getInfo();

    protected:

    private:
		int num;
		float duration;
};

#endif // EPISODE_H
