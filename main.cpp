/*
Dante David Pérez Pérez
A01709226
Project TC1030
10/06/2022
The purpose of this program is to show the movies and the series on the platform
with his name, category, ID, rating and duration.
*/
#include <iostream>
#include "Content.h"
#include "Serie.h"
#include "Movie.h"
#include "Episode.h"
#include <vector>

using namespace std;

void menu(){ //Main menu
	cout<<"Welcome bask to your favorite stream service program"<<endl;
	cout<<"1 - Show movies "<<endl;
	cout<<"2 - Show series"<<endl;
	cout<<"3 - Compare rating between movies"<< endl;
	cout<<"Any number - Exit"<<endl;
}

void menuSeries(){
    cout<<"Which serie do you want to see? "<<endl;
    cout<<"1 - Stranger Things "<<endl;
	cout<<"2 - The Office"<<endl;
	cout<<"Any  number - exit to the main menu"<<endl;
}

int main()
{
    int opc; //VARIABLE TO CHOOSE AN OPTION
	opc=1;
	int opc2 = 1;

    int keep;//VARIABLE FOR LOOP
	keep=0;

	//Objects by aggregation
	Episode st1(1,36.12), st2(2,40.45), st3(3,38.2);
	Date dst(15,7,2016);
	Episode to1(1,22.41), to2(2,30.22), to3(3,19.46);
	Date dto(24,3,2005);


	while(keep ==0){ //LOOP WITH MENU
		menu();
		cin>>opc;

		if(opc==1){
		    //Show movie information
		    vector <Content*> contents;
		    contents.push_back(new Movie("Minions", "Drama", 281868, 5, 120.60));
		    contents.push_back(new Movie("Titanic", "Comedy", 281654, 3, 200.45));
		    contents.push_back(new Movie("Dr Strange", "Romance", 287462, 4, 198.14));


		    vector <Content*>::const_iterator i;
		    for (i = contents.begin(); i != contents.end(); i++){
                    cout<<(*i)->printInfo()<<endl;
		    }
		}
		//Show series information
		else if(opc==2){
            int keep2=0;

            while(keep2 == 0){
                menuSeries();
                cin>>opc2;

                if(opc2==1){
                    vector <Content*> contents;
                    contents.push_back(new Serie("Stranger Things", "Satire", 659541, 5, st1, 1, dst));
                    contents.push_back(new Serie("Stranger Things", "Satire", 659541, 5, st2, 1, dst));
                    contents.push_back(new Serie("Stranger Things", "Satire", 659541, 5, st3, 1, dst));

                    vector <Content*>::const_iterator i;
                    for (i = contents.begin(); i != contents.end(); i++){
                        cout<<(*i)->printInfo()<<endl;


                    }
                }
                else if(opc2==2){
                    vector <Content*> contents;
                    contents.push_back(new Serie("The Office", "Comedy", 625498, 5, to1, 1, dto));
                    contents.push_back(new Serie("The Office", "Comedy", 625498, 5, to2, 1, dto));
                    contents.push_back(new Serie("The Office", "Comedy", 625498, 5, to3, 1, dto));

                    vector <Content*>::const_iterator i;
                    for (i = contents.begin(); i != contents.end(); i++){
                        cout<<(*i)->printInfo()<<endl;

                    }
                }
                else{
                    cout<<"That Serie we don't have"<<endl;
                    keep2+=1;
                }

            }
		}
		//Compare the ratings between movies
		else if(opc==3){
                Movie mr1("Minions", "Drama", 281868, 5, 120.60);
                Movie mr2("Titanic", "Comedy", 281654, 3, 200.45);
                if(mr1<mr2){
                    cout<<"Minions have worst ratin"<<endl;
                }
                else{
                    cout<<"Minions have better rating"<<endl;
                }


		}
		//Close while loop
		else{
            cout<<"Thanks for using this programm"<<endl;
            keep+=1;
		}
	}
    return 0;
}
