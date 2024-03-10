#ifndef PLAYER_H
#define PLAYER_H

#include <string>

//head 有class
class Player{
public:
	virtual char makeMove() = 0;//构建抽象类的必备类似于Java的抽象放方法
	virtual std::string getName() = 0;//java的抽象方
};//跟分号，类


#endif //跟ifndef 是一起的
