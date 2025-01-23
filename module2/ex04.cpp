#include <iostream>



int main(){
std::string brain = "HI THIS IS BRAIN";
std::string *ptr = &brain;
std::string &ref = brain;

std::cout << *ptr << "     this is the pointer pointing to brain\n";
std::cout << ref <<  "     this is the reference referencing brain\n";


return (0);
}
