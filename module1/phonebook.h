#include <iostream>
#include <string>
#include <iomanip>


class	contact{
	
	public:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

	contact() {}; 
	std::string get_value(std::string input) const {
		return "tuamadre";
	};
	void	set_first_name(std::string input){
		first_name = input;
	};
	void	set_last_name(std::string input){
		last_name = input;
	};
	void	set_nick_name(std::string input){
		nick_name = input;
	};

	void	set_login(std::string input){
		login = input;
	};

	void	set_postal_address(std::string input){
		postal_address = input;
	};
		
	void	set_email_address(std::string input){
		email_address = input;
	};

	void	set_phone_number(std::string input){
		phone_number = input;
	};
	void	set_birthday_date(std::string input){
		birthday_date = input;
	};
	void	set_favorite_meal(std::string input){
		favorite_meal = input;
	};
	void	set_underwear_color(std::string input){
		underwear_color= input;
	};
	void	set_darkest_secret(std::string input){
		darkest_secret = input;
	};
	
	void	print(){
	
		std::cout << first_name << "\n";
		std::cout << last_name << "\n";
		std::cout << nick_name << "\n";
		std::cout << login << "\n";
		std::cout << postal_address << "\n";
		std::cout << email_address << "\n";
		std::cout << phone_number << "\n";
		std::cout << birthday_date << "\n";
		std::cout << favorite_meal << "\n";
		std::cout << underwear_color << "\n";
		std::cout << darkest_secret << "\n";
	};
	




};


typedef struct phonebook{
	int counter;
	//gruppo di 9 contatti 
	contact	contactInstance[9];
	void	search_display(){
	
		for(int i = 0; i < counter; i++){
		
			std::cout << std::right <<std::setw(10) << i ; 
		
			std::cout << " | ";

			std::cout << std::right <<contactInstance[i].first_name.substr(0, 10) + "."; 
	
			std::cout << " | ";

			std::cout << std::right <<contactInstance[i].last_name.substr(0, 10) + "."; 
			
			std::cout << " | ";
			
			std::cout << std::right<<contactInstance[i].nick_name.substr(0, 10) + "."; 
			std::cout <<"\n";
		}
	};
} phonebook;
