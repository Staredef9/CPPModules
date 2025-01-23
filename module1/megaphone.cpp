#include <iostream>


int	is_char_upper(char prova){

	if (prova >= 'A' && prova <= 'Z'){
		return 1;
	} else {
		return 0;
	}
}
int	is_char_lower(char prova){

	if (prova >= 'a' && prova <= 'z'){ 
		return 1;
	}
	else {
		return 0;
	}
}

int main(int argc, char **argv){

	if (argc < 2){
		std::cout<<"LOUD AND UNBEARABLE FEEDBACK NOISE" << "\n";
		return 0;
	}else{
		int j = 1;
		while (j < argc){
		char *prova = argv[j];
		int i = 0;
		while(prova[i] != '\0'){
			
			if (is_char_lower(prova[i])){
					prova[i] -= 32;		
			}
			i++;
		}
		std::cout << prova << " ";	
		j++;
		}
	}
	return 0;
}
