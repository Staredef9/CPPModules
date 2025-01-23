

#include <iostream>

void	memoryLeak()
{
	std::string*	panther = new std::string("String Panther");

	std::cout << "Address: "<< panther << "Content: "<< *panther << std::endl;
	
	delete panther;	
}

int main(){

	
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();
	memoryLeak();

	return 0;
}
