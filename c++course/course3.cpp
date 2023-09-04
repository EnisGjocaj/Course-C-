#include <iostream>

int main() {
	
	//Adresat memorike:
	
	//adresa e memories: nje lokacion ne memorie ku ruhen te dhenat
	//Nje adrese memorike mund te qaset me operatorin &
	
	//Le ti krijojme disa variabla:
	
	std::string name = "Enis";
	int age = 17;
	
	//Variablat jane mbajtese te insormatave por ato duhet te ekistojne diku ne memorie, ne adresen e tyre.
	
	std::cout << &name << "\n"; //Ne kete rast do marrim adresen memorike ku eshte ruajtur kjo variabel ne ram memorie.
	std::cout << &age << "\n"; //Adresat memorike kane vlere heksadecimale; 
	
	//Nese i krahasojme keta numra heksadecimal qe i fitojme do shohim se ato nuk jane vlera te barabarta sepse keto the dhena nuk kane sasi te memories te njejte qe e marrin.
	
	return 0;
}