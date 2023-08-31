#include <iostream>
#include <vector>
#include <cmath>
#include <ctime> //per numrat e rendomte

typedef std::vector<std::pair<std::string, int>> pairlist_t //Ne kete rast kesaj te dhene ja kemi paraqitur emrin pairlist
//typedef std::string text_t;

//Typedef eshte zevendesuar me using keyword e cila perdoret keshtu:
using numri_t = int;
using string = std::string;

namespace first {
	int num = 1;
}

namespace second {
	int num = 2;
}

//variabla globale:
int numri_iDhene = 3;

//funksioni i definuar:

void helloFunction(std::string name, int mosha);
double square(double length);

std::string concatString(std::string string1, std::string string2);

//overloaded function:
int add(int a, int b);
double add(double a, double b);

//variables scope:
void printNum();

int main(){
	
//	using namespace first;
//  using namespace std;
	
	//Hyrje: Printimi, kalimi ne rreshtin e ri me endl dhe '/n'
	
	std::cout << "I like me" << std::endl;
	std::cout << "Enis" << std::endl;
	
	//Variablat dhe tipet e informates
	
	//Ekzistojnë dy menyra te krijimit te variablave:
	//1: Deklarimi 
	int z;
	z = 5;//assigment
	
	//keto mund ti kombinojme: 
	int x = 5;
	int y = 6;
	
	int sum = x + y;
	std::cout << sum << std::endl;
	
	//Tipet e te dhenave:
	//numrat e plote(int)
	
	int year = 2023;
	
	//double(decimal float)
	
	double price = 10.99;
	
	//single character
	char grade = "A";
	char currency = "$";
	
	//boolean
	bool student = true;
	
	//string (objekt qe paraqet nje sekuence te karakterece a te tekstit)
	std::string name = "Enis";
	
	std::cout << "Hello " << name;
	
	//const keyword:
	const double PI = 3.14;
	double rrezja = 10;
	double perimetri = 2 * PI * rrezja;
	
	//NameSpace(sjell zgjidhje problemit te knfliktit te emerimit ne projekt, ku cdo element ka emer unik, duke pasur namespace te ndryshem)
	//Ne krye te faqes i kemi te definuara dy namespace per kete variabel:
	
	int num = 0;
	
	//Nese ne e printojme kete variabel tani do e printoje vleren 0, apo vleren lokale, ne te kunderten ne mund te perdorim scope resolution operator:
	std::cout << first::x; //Tani do kemi vleren 1 te printuar
	//Ne mund ta bejme nje namespace te zakonshem ne kete rast duke e paraqitur kodin: using namespace first; ku ne kete rast vlera lokale e num-it do jete 1;
	
	//typedef-keyword qe na ndihmon per me kriju emer shtese per nje tip te dhenave apo alias, ne krye te dolumentit e kemi te paraqitur perdorimin e typedef	
	pairlist_t pairlist;
	text_t programmingLanguage = "C++";
	
	//Operatoret artimetik:
	int students = 20;
	students = students + 1;
	students++ //increment operator
	students+=2
	
	//Nese e pjestojme numrin e nxenesave tani per nje nje numer qe nuk plotpjetohet me numrin e studenteve nuk o paraqitet vlera decimale sepse jemi duke punuar me numra te plote.Per te marre mbetjen e pjestimit veprojme si ketu
	
	int mbetja = students % 3;
		
	//te njejtat rregulla vlejne edhe per operacionet tjera
	//Rregullat e rendit te operacioneve ne matematike vlejne edhe ketu:
	int detyra = (6 - 5) * 3; // = 3
	
	//Convertimi i te dhenave: konvertimi implicit dhe explicit
	
	const int numri_pi = 3.14; //nese e printojme kete numer do marrim vleren 3. Pra kjo eshte forma implicite e nderrimit te informates, ne kete rast nga double ne int.
	const double temperatura = (int) 22.5; //kjo eshte forma eksplicite per nderrimin  e informates dhe kjo variabel paraqet vleren 22
	//Me poshte kemi nje rast tjeter 
	
	char karakteri = 100; // nese e printojme kete vlere do marrim shkronjen d.
	//Ne shembullin me poshte do e bejme llogaritjen e perqindjes ne test:
	
	int correct = 8;
	int pyetjet = 10;
	double perqindja = correct / pyetjet * 100; // Nese e pritojme kete vlere do marrim rezultatin 0, sepse programi eshte duke i pjestuar numrat 8/10 si numra te plote, prandaj duhet te nderrojme te dhenen si me poshte:
	
	int correct = 8;
	int pyetjet = 10;
	double perqindja = correct / (double) pyetjet * 100; 
	
	//User input
	
	//cout << (insertion operator)
	//cin >> (extraction operator)
	
	//Ketu shohim nje shembull si te marrim emrin e perdoruesit:
	
	std::string name;
	int age;
	string fullName;
	
	std::cout << "Whats your name?";
	std::cin >> name;
	
	//Nese deshirojme ta marrim nje string i cili permban edhe hapsira atehere verpojme keshtu
	
	std::cout << "Whats your full name?: ";
	std::getline(std::cin >> std::ws, fullName); //Ne duhet gjithmone te perdorim kete kod std::getline(std::cin, fullName); ne fillim te cin per arsye se perdorimi i saj e krijon whitespace ne console, prandaj e perdorim std::ws
	
	
	std::cout << "Whats your age?";
	std::cin >> age;
	
	std::cout << "Hello " << name;
	std::cout << "Youre " << age << " years old"; 
	
	//8 funksione matematike
	//Per kete shembull kemi per ti perdorur keto variabla:
	double x = 3.2;
	double y = 4;
	double z;
	
	z = std::max(x, y); // e kthen vleren 4
	z = std::min(x, y); // e kthen vleren 3
	
	z = pow(2, 3);
	z = sqrt(9);
	z = abs(-1);
	
	z = round(x);
	z = ceil(x);
	z = floor(x);
	
	//Teorema e pitagores, gjetja e hipotenuzes
	
	double a;
	double b;
	double c;
	
	std::cout << "Katetja A: ";
	std::cin >> a;
	
	std::cout << "Katetja B: ";
	std::cin >> b;
	
	c = sqrt(pow(a, 2) + pow(b, 2));
	
	//if statements
	
	int age;
	
	std::count << "Enter you age: ";
	std::cin >> age;
	
	if(age >= 18) {
		std::cout >> "Welcome in our site!";
	}else if(age > 50) {
		std::cout >> "Youre old to enter this page";
	}
	else {
		std::cout >> "Youre not old enough to enter!";
	}
	//rendi i else if ka rendesi
	
	//switch statement: alterantive e shume else if statements ku i krahasiojme nje vlere me shume raste te ndryshme
	
	int day;
	std::cout >> "Enter the day(1-7): ";
	std::cin << day;
	
	switch(day){
		case 1:
			std::cout >> "E hene";
			break;
		case 2:
			std::cout >> "E marte";
			break;
		case 3:
			std::cout >> "E merkure";
			break;
		case 4:
			std::cout >> "E enjte";
			break;
		case 5:
			std::cout >> "E premte";
			break;
		case 6:
			std::cout >> "E shtune";
			break;
		case 7:
			std::cout >> "E diel";
			break;
		default:
			std::cout >> "Ju lutem vendoseni nje numer 1-7";
	}
	
	//Kalkulator
	
	char op;
	double num1;
	double num2;
	double result;
	
	std::cout << "***********KALKULATORI***********" << std::endl;
	
	std::cout << "Vendos njeren prej operacioneve (+ - * /): ";
	std::cin >> op;
	
	std::cout << "Numri #1: ";
	std::cin >> num1;
	
	std::cout << "Numri #2: ";
	std::cin >> num2;
	
	switch(op) {
		case '+':
			result = num1 + num2;
			std::cout << "result: " << result << std::endl;
			break;
		case '-':
			result = num1 - num2;
			std::cout << "result: " << result << std::endl;
			break;
		case '*':
			result = num1 * num2;
			std::cout << "result: " << result << std::endl;
			break;
		case '/':
			result = num1 / num2;
			std::cout << "result: " << result << std::endl;
			break;
		default:
			std::cout << "Nuk ke paraqitur operator te rregullt!" << std::endl;
			break;
	}
	
	std::cout << "*********************************";
	
	//ternary operator ?:
	
	int grade = 75;
	
	grade > 60 ? std::cout << "You pass" : std::cout << "You fail";
	
	int n = 4;
	n % 2 ? std::cout << "Tek" : std::cout << "Çift";
	
	bool ePerfunduar = true;
	
	std::cout << (ePerfunduar ? "Puna eshte kryer" : "Puna nuk eshte kryer");
	
	//Operatoret logjik
	
	//&&-dhe, ||-ose, !-negacioni:
	
	int temp;
	bool vlera = true;
	
	std::cout << !vlera;
	
	std::cout << "Vendoseni temperaturen: ";
	std::cin >> temp;
	
//	if(temp > 0 && temp < 30){
//		std::cout << "Temperatura eshte e mire";
//	}else {
//		std::cout << "Temperatura eshte jo e mire";
//	}

	if(temp <= 0 || temp >= 30){
		std::cout << "Temperatura eshte jo e mire";
	}else {
		std::cout << "Temperatura eshte e mire";
	}
	
	//temperature converison
	
	double temp;
	char unit;
	
	std::cout << "***********Temperature conversion**********\n";
	
	std::cout << "F = fahrenheit\n";
	std::cout << "C = celsius\n";
	std::cout << "Çfare njesie deshironi te konvertoni ne: ";
	std::cin >> unit;
	
	if(unit == 'F' || unit == 'f'){
		std::cout << "Vlera e temperatures ne celcius: ";
		std::cin >> temp;
		
		temp = (1.8 * temp) + 32.0;
		std::cout << "Temperatura eshte: " << temp << "F\n";
	}
	else if(unit == 'C' || unit == 'c'){
		std::cout << "Vlera e temperatures ne fahrenheit: ";
		std::cin >> temp;
		
		temp = (temp - 32) / 1.8;
		std::cout << "Temperatura eshte: " << temp << "C\n";
	}else {
		std::cout << "Ju lutem vendoseni nje vlere prej F ose C\n";
	}
	
	std::cout << "*******************************************\n";
	
	//string methods
	
	std::string teksti;
	std::cout << "Shkruajeni nje tekst: ";
	std::getline(std::cin, teksti);
	
	//1.length:
	int gjatesia = teksti.length();
	
	//2. empty: (boolean value)
	if(teksti.empty()){
		std::cout << "Duhet te vendosni emrin";
	}
	
	//3. clear: E ben fshirjen e te dhenave qe i japim
	teksti.clear();
	
	//4. append:
	teksti.append("Ky eshte funksioni append");
	
	//5. at(): (ben kthimin e karakterit ne nje pozite )
	std::cout << teksti.at(1) << std::endl;
	
	//6. insert: (e shton nje karakter ne nje pozite tte caktuar;
	teksti.insert(0, "@"); 
	
	//7. find(): (gjetja e nje karakteri ne string)
	std::cout << teksti.find(' ');
	
	//8. erase:(e ben fshirjen e nje pjese te tekstit duke i marre dy arumente, piken e fillimit dhe ate te mbarimit)
	teksti.erase(0, 3);
	
	
	//While loops
	//While loops bejne ekzekutimin e nje codi, derisa nje kusht te plotsohet
	std::string word;
	
	while(word.empty()) {
		std::cout << "Shkruajeni nje fjale: \n";
		std::getline(std::cin, word);
	}
	std::cout << "Fjala eshte: " << word;
	
	//do-while loops: kjo loop bene ekzekutimin e nje kodi fillimisht, e pastaj e perserit nese plotsohet kushti:
	int n1;
	
	do {
		std::cout << "Shkuaje nje numer pozitiv: ";
		std::cin >> n1;
	}while(n1 < 0);
	
	std::cout << "numri i juaj eshte: " << n1;
	
	//nese e kishim perdorur while loop ne kete rast nuk do funksiononte sepse do ishim te detyruar te shkruanim kodin dy here 
	
	//for loop:
	
	for(int i = 1; i <= 3; i++){
		std::cout << "Hello" << std::endl; //ky kod do perseritet trre here,
//		std::cout << i << '\n'; ky kod do numeroje deri ne 3
	}
	
	//break & countinue
	//break e ndalon iterimin, kurse countinue e anulon iterimin e tanishem
	
	for(int i = 1; i <= 20; i++){
		if(i == 10){
			break;//ne kete rast loop do ndaloje iterimin dmth.te 10.
		}
		if(i == 10){
			continue;// ne kete rast do shkruhen numrat deri ne 20 pa 10.
		}
		std::count << i << '\n';
	}
	
	//Nested loops:
	int rreshtat;
	int kolonat;
	char simboli;
	
	std::cout << "Sa rreshta?: ";
	std::cin >> rreshtat;
	
	std::cout << "Sa kolona?: ";
	std::cin >> kolonat;
	
	std::cout << "Çfare simboli do perdorni?: ";
	std::cin >> simboli;
	
	for(int i = 1; i <= rreshtat; i++ ){
		for(int j = 1; j <= kolonat; j++){
			std::cout << simboli << ' ';
		}
		std::cout << '\n';
	}
	
	//gjenerimi i numrave te rendomte:
	
	srand(time(NULL)); //generuesi i numrave te rendomte;
	
	int numri_rendomte = (rand() % 6) + 1;//nese  e perdorim vetem funkxionin rand atehere do marrim numra te medhenj, prenadaj duhe te perdorim operatorin %
	std::cout << numri_rendomte;
	
	//gjenerimi i ngjarjeve te rendomta:
	
	srand(time(0));
	int randNum = (rand() % 3) + 1;
	
	switch(randNum){
		case 1: std::cout << "Sot dite me diell.\n";
				break;
		case 2: std::cout << "Sot dite me shi.\n";
				break;
		case 3: std::cout << "Sot dite e vranet.\n";
				break;
	}
	
	//Gjetja e numrit:
	
	int numriRand;
	int numri_juaj;
	int prova;
	
	sradn(time(0));
	numriRand = (rand() % 100) + 1;
	
	do{
		std::cout << "Numer (1-100): ";
		std::cin >> numri_juaj;
		prova++;
		
		if(numri_juaj > numriRand) {
			std::cout << "Numri eshte I vogel.\n";
		}
		else if(numri_juaj > numriRand){
			std::cout << "Numri eshte me i madh.\n";
		}else {
			std::cout << "Sakte! Ju e gjetet numrin pas: " << prova << "tentimeve.\n";
		}
		
	}while(numri_juaj != numriRand);
	
	//funksionet: blok i riperdorueshem i kodit:
	std::string name = "Enis";
	int mosha = 17;
	
	helloFunction(name, mosha);      //thirrja e funksionit;
	
	//return keyword
	
	//return = e kthen nje vlere ne vendin qe e kemi thirrur funksionin
	//Per ta demostruar kete fjale do e definojme funksionin square te cilin e gjejme ne krye te funksionit main
	//Funksioni i cili e kthen nje vlere duhet qe ne vend te void te paraqese tipin e te dhenave qe e kthen e cila ne kete rast eshte double:
	
	double length = 5.0;
	double siperfaqja = square(length);
	
	//Tani do s definojme nje funksion i cili do e bashkoje emrin dhe mbiemrin:
	
	std::string firstName = "Enis";
	std::string lastName = "Gjocaj";
	std::string fullName = concatString(firstName, lastName);
	
	//overloaded functions:
	
	//overloaded functions jane funksione te cilat kane te njejtin emer por shtojne vlera the parametrave shtese opsionale, pra keto funksione kane liste tjeter te parametrave, si funksionet e definuara me emrat:
	num1 = 3.12;
	num2 = 5.2;
	
	shuma = add(num1, num2);//ky funksion tash pranon edhe vlera me numra te plote edhe racional.
	
	//variables scope: local scope dhe global scope
	//variablat lokale jane te deklaruara mbrenda funksionit apo bllokut te kodit.
	//variablat globale jane te deklaruara jashte te gjithave funksioneve.
	
	//Ne kete rast do kemi nje numer qe do e paraqesim:
	
	int numri_iDhene = 1; //funksioni i printimit gjendet me poshte
	printNum();
//	std::cout << ::numri_iDhene << std::endl;
	return 0;
}

void helloFunction(std::string name, int mosha) {
	std::cout << "Hello!" << name << std::endl;
	std::cout << "Ti je " << mosha << " vjec.\n";
}//ky funksion eshte definuar poshte main function prandaj ai duhet te definohet ne krye te funksionit main para se te perdoret.

double square(double length){
	double result = length * length;
	return result;//kthimi i vleres se funksionit
}

std::string concatString(std::string string1, std::string string2) {
	return string1 + " " + string2;
}

//overloaded functions:

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

//variable scope

void printNum() {
  //int numri_iDhene = 2; Ne kete rast variabla eshte e definuar mbrenda funksionit prandaj problemi rregullohet
	std::cout << numri_iDhene; //ne kete rast do kemi nje error sepse funksioni nuk mund qe te kete qasje te variabla sepse ajo gjendet ne local variable scope,
}
//Ne te kunderten ne mund ta definojme variablen ne krye te faqes jashte funksionit main() dhe atehere ajo varuable do jete ne global scope prandaj te gjithe funksionet do kene qasje te kjo variabel.
//Nese kemi te njejten variable edhe ne global scope si dhe ne local scope atehere ajo lokale do lexohet , prandaj ne mund te perdorim operatorin :: ne menyre qe ta bejme programin qe te perdore variablen globale.

