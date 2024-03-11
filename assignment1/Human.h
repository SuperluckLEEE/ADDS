#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"
#include <iostream>


class Human: public  Player{
	private:
		std::string name;
		char move;
	public:
		Human(std::string name = "Human");
		char makeMove() override;
	
		void setMove(char m);

		std::string getName() override;



};


#endif
