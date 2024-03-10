//string head file need
//#include <string>
#include <string>

class Player {

	public:
		//Statement the abstract class
		//and it need to be implement(same with java)
		//only one virtual 
		virtual char makeMove( ) = 0;
		//std ::
		virtual std::string getName() = 0;

};
