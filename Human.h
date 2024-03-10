#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"//类似Java的导入包
#include <iostream>//类似Java导入标准的输出输入库


class Human: public  Player{//继承关系，相当于Java中的extent
	private:
		std::string name;//此类私有成员变量
		char move;
	public:
		Human(std::string name = "Human");
		char makeMove() override;//java中的重写编写方式不一样
					 //jason 说还有种方法明天问一下
		void setMove(char m);

		std::string getName() override;



};


#endif
