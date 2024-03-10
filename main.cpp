#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

	Referee referee;
	string name;
	cout<<"Enter name: ";
	getline(cin,name);

	Human human(name);	
	Computer computer;
	
	char move;
	cout<<"Enter move: ";
	cin>>move;
	if(move == 'R'|| move == 'P' || move == 'S'){
	human.setMove(move);
	
	
	Player* winner = referee.rerefGame(&human , &computer);//only* use ->
	if(winner == nullptr){
	cout<<"It's a Tie"<<endl;
}else{
	cout<<winner->getName()<<" Wins."<<endl;
		 }
	}
}
