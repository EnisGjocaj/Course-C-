#include <iostream>
//Deklarimi i funskionit te njesise: Pass me ane te references dhe vleres:

void swap(std::string &x, std::string &y)

//Deklarimi i funksionit te njesise: const parameter:

void printInfo(const std::string name, const int age);

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
	
	
	
	
	//Pass me ane te references dhe vleres:
	
	//Per ta kuptuar kete ne do e shohim si mund tia nderrojme vleren variablave:
	std::string x = "Vlera1";
	std::string y = "Vlera2";
	
	swap(x, y);//Tani edhe pse e kemi vendsour te njejten logjike ne funksion, vlerat e variabëave nuk jane nderruar, sepse kur ne e vendosim nje variabel si parameter te funksionit, ne e vendosim ate vetem si vlere pra pass by value, dhe kjo i bie qe ne vetem e krojojme kopjen e saj. Per tia nderruar vertete vendin ne duhe tqe ti vendosim ato me ane te refereneces, dhe per ta bere kete e vednosim & para variablave ne parameter te funksionit dhe ato tash referencohen me ane te addreses se tyre memorike.
	
	std::string temp; //Variabel e perkohshme qe na dnihmon ti mbajme vlerat:
	
	temp = x;
	x = y;
	y = temp; //Tash vlerat e variablave jane te nderruara.
	
	//Tash ta implementojme kete logjike me ane te nje funksioni, te dhene me poshte.
	
	
	
	
	//const parameter:
	
	//Ky parameter na mundeson qe ne te shkruajme kod vetem te lexueshem qe eshte me i sigurte.
	
	std::string emri = "Enis";
	int age = 21;
	
	printInfo(name, age);
	
	return 0;
}

//Funksioni i nderrimit te vendit te variablave: Pass me ane te references dhe vleres:

void swap(std::string &x, std::string &y){
	
	std::string temp;
	
	temp = x;
	x = y;
	y = temp;
}

//Funksioni i njesise: const parameter:
void printInfo(const std::string name, const int age){
	
	//Ne tani jemi duke i printuar vlerat e ketyre dy variablave. Por per ti bere keto variabla shume me te sigurta ne mund ti parashtrojme atyre fjalen const ne menyre qe ato nuk mund te ndryshohen kurre.
	
	std::cout << name << std::endl;
	std::cout << age << std::endl;
	
}


