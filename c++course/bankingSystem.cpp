#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {

	double balance = 0;
	int zgjidhja = 0; //Kjo variabel na tregon se nese perdorusi do terheq apo depositoje para

	do{
		
		std::cout << "Cfare deshironi te beni? \n";

		std::cout << "1. Trego balancin\n";
		std::cout << "2. Depozito para\n";
		std::cout << "3. Terheq para\n";
		std::cout << "4. Del\n";
	
		std::cin >> zgjidhja;
		
		std::cin.clear();
		fflush(stdin);
	
		switch(zgjidhja) {
			case 1:
				showBalance(balance);
				break;
			case 2:
				balance += deposit();
				showBalance(balance);
				break;
			case 3:
				balance -= withdraw(balance);
				showBalance(balance);
				break;
			case 4:
				std::cout << "Dolet nga programi!\n";
				break;
			default:
				std::cout << "Zgjidhje jo e duhur!\n";
		}
		
	}while(zgjidhja != 4);

	return 0;
}

void showBalance(double balance){
	
	std::cout << "Balanca juaj eshte: $" << std::setprecision(2) << std::fixed << balance << '\n';
}
double deposit(){
	
	double sasia = 0;
	
	std::cout << "Vendoseni sasine per depositim: ";
	std::cin >> sasia;
	
	if (sasia > 0){
		return sasia;
	}else {
		std::cout << "Kjo sasi nuk mund te depozitohet! ";
		return 0;
	}
}
double withdraw(double balance){
	
	double sasia = 0;
	
	std::cout << "Vendoseni sasine qe deshironi ta terheqni: ";
	std::cin >> sasia;
	
	if (sasia > balance ){
		std::cout << "Nuk mund ti terheqni keto para!\n";
		return 0;
	}
	else if (sasia < 0){
		std::cout << "Kjo nuk eshte vlere e mundur.\n";
		return 0;
	}else {
		return sasia;
	}
	
}