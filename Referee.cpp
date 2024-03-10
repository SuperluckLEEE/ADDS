#include "Referee.h"
using namespace std;

Player* Referee::rerefGame(Player* player1,Player* player2){
	char p1M = player1-> makeMove();
	char p2M = player2-> makeMove();
	if((p1M == 'S' && p2M == 'P' )||(p1M == 'R' && p2M == 'S')||(p1M == 'P' && p2M == 'R')){
	return player1;

}else if(p1M == p2M){

	return nullptr;

}else{
	
	return player2;

}
}



