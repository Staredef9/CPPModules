#include "Brain.h"

class Human{

	private:
	 brain instance;
	
	public:
		Human();
		Human(int input);
		~Human();
		brain& getBrain();
		std::string identify();
};
