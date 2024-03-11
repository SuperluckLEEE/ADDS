//string head file need
//#include <string>
#include <string>
using namespace std;
#include "Human.h"


Human::Human(string name):name(name){
	//this->name = name;
if(name.length() == 0){
	this->name = "Human";
}	
}
char Human::makeMove(){
	return move;
}
void Human::setMove(char m){
	move = m;
		
}

string Human::getName(){
	return name;
}
