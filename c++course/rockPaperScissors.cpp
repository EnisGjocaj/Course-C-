#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
	
	char player;
	char computer;
	
	player = getUserChoice();
	std::cout << "Zgjidhja jote eshte: ";
	showChoice(player);
	
	computer = getComputerChoice();
	std::cout << "Zgjidhja e kompjuterit eshte: ";
	showChoice(computer);
	
	chooseWinner(player, computer);
	
	return 0;
}

char getUserChoice(){
	
	char player;
	
	do {
    	std::cout << "Zgjedhe nje prej ketyre?: " << std::endl;
    	std::cout << "'r' per guri\n";
    	std::cout << "'p' per leter\n";
    	std::cout << "'s' per gershere\n";
    	std::cin >> player;
	} while (player != 'r' && player != 'p' && player != 's');

	
	return player;
}
char getComputerChoice(){
	
	srand(time(0));
	int num = (rand() % 3) + 1;
	
	switch(num){
		case 1: return 'r';
		case 2: return 'p';
		case 3: return 's';
	}
	
	return 0;
}
void showChoice(char choice){
	
	switch(choice) {
		case 'r': std::cout << "Guri\n";
				break;
		case 'p': std::cout << "Leter\n";
				break;
		case 's': std::cout << "Gershere\n";
				break;
	}
	
}
void chooseWinner(char player, char computer){
	
	switch(player){
		case 'r': 	if(computer == 'r'){
						std::cout << "Barbarte!\n";
					}
					else if(computer == 'p'){
						std::cout << "Ti humbe!\n";
					}else {
						std::cout << "Ti fitove!\n";
					}
					break;
					
		case 'p': 	if(computer == 'r'){
						std::cout << "Ti fitove!\n";
					}
					else if(computer == 'p'){
						std::cout << "Barabarte!\n";
					}else {
						std::cout << "Ti humbe!\n";
					}
					break;
					
		case 's': 	if(computer == 'r'){
						std::cout << "Ti humbe!\n";
					}
					else if(computer == 'p'){
						std::cout << "Ti fitove!\n";
					}else {
						std::cout << "Barabarte!\n";
					}
					break;
	}
}