#include "phonebook.h"


int main(){
	
	phonebook instance;
	//std::cout << "Instance created" <<"\n";	
	//adesso funzione per promptare utente
	//logica per inizializzare correttamente la instance del phonebook
	//logica per get delle info richieste dall'utente
	//logica per dire finito lo spazio nel phonebook
	
	instance.counter = 0;

	std::cout<< "ADD, SEARCH or EXIT?" << "\n";
	std::string input;
	std::cin >> input;	
	
	while (input.compare("EXIT") != 0){
	
		std::cout<< "ADD, SEARCH or EXIT?" << "\n";

		std::cin >> input;
		std::cin.ignore(100, '\n');


		if (input.compare("ADD") == 0){
		
		//controlla iteratore della instance a che numero e'
		//se sotto 9 allora si scorre e si aggiunge ogni voce promptando utente
		//altrimenti si dice "phonebook full!"

		if(instance.counter >= 8){
			std::cout <<"phonebook full!" << "\n";
			continue;
		}

		std::cout << "Insert new person:" << "\n";
		
		std::cout << "First Name:" << "\n";
		std::getline(std::cin, input);
		instance.contactInstance[instance.counter].set_first_name(input);
		
		std::cout << "Last Name:" << "\n";
		std::getline(std::cin, input);
		instance.contactInstance[instance.counter].set_last_name(input);
		
		std::cout << " NickName:" << "\n";
		std::getline(std::cin, input);
		instance.contactInstance[instance.counter].set_nick_name(input);
		
		std::cout << "Login:" << "\n";
		std::getline(std::cin,input);
		instance.contactInstance[instance.counter].set_login(input);
		
		std::cout << "Postal Address:" << "\n";
		std::getline(std::cin, input);
		instance.contactInstance[instance.counter].set_postal_address(input);

		std::cout << "Email Address:" << "\n";
		std::getline(std::cin, input);
		instance.contactInstance[instance.counter].set_email_address(input);
		

		std::cout << "Phone Number:" << "\n";
		std::getline(std::cin, input);
		instance.contactInstance[instance.counter].set_phone_number(input);


		std::cout << "Birthday date:" << "\n";
		std::getline(std::cin, input);
		instance.contactInstance[instance.counter].set_birthday_date(input);

		std::cout << "Favorite meal:" << "\n";
		std::getline(std::cin, input);
		instance.contactInstance[instance.counter].set_favorite_meal(input);
		
		std::cout << "Underwear color:" << "\n";
		std::getline(std::cin, input);
		instance.contactInstance[instance.counter].set_underwear_color(input);
		
		std::cout << "Darkest secret:" << "\n";
		std::getline(std::cin, input);
		instance.contactInstance[instance.counter].set_darkest_secret(input);
		
		instance.counter++;
		
		} else if (input.compare("SEARCH") == 0){

		///RETRIEVE dell'input che si chiede ad utente
		//std::string research;
		//std::cin >> research;
		//fai cose con il valore in input per cercare dentro le classi
		/*std::string input_number;
		std::cout << "which number ?\n";
		std::cin >> input_number ;
		int value = std::stoi(input_number);
			
		instance.contactInstance[value].print();
*/
			std::string to_retrieve;

			instance.search_display();
			
			std::cout <<"Select index:" << "\n";
			std::getline(std::cin, to_retrieve);
			int numInstance = std::stoi(to_retrieve);
				
			while(numInstance < 0 || numInstance > 8 || numInstance >= instance.counter )
			{
				std::cout << "Wrong input. Try Again" << "\n";
				std::getline(std::cin, to_retrieve);
				numInstance = std::stoi(to_retrieve);
			}
			instance.contactInstance[numInstance].print();
		}
	}
	std::cout<< "Exiting the process" << "\n";
	return 0;	

}
