#include <iostream>

//Funksoni i cili i mbledh numrat mbrenda array: Array ne parameter te funksionit:

double getTotal(double numrat[], int size);

//Funksioni i kerkimit te array per nje numer:

int searchArray(int nums[], int gjatesia, int element);

//Funksioni i sortimit:

void sort(int array[], int madhesia);

int main(){
	
	//ARRAY - data structure e cila permban nje liste te vlerave, qe kan indekset e tyre.
	
	
	
	//definimi i nje array te stringjeve behet keshtu:
	std::string sporti[] = {"Futboll", "Basketboll", "Tenis"};
	
	//nese ne e printojme kete array : std::cout << sporti do marrim adresen e memories qe e paraqet.
	//Per ta printuar elementin e pare e perdorim indeksin e elementit:
	
	std::cout << sporti[0] << std::endl;//Futboll
	//Ne array ne mund te ndryshojme vlerat e elementeve, psh. nese dojme qe ne vend te futbollit te kemi voljeboll atehere:
	sporti[0] = "Volejboll";
	//E njejta medote si kjo perdoret ne rastin kur ne nuk e dime se cfare vlerash do marr array, por ne kete rast duhet ta deklarojme madhesin e array:
	
	std::string lendet[4];
	
	lendet[0] = "Matematike";
	lendet[1] = "Informatike";
	lendet[2] = "Fizike";
	lendet[3] = "Gjuhe shqipe";
	
	
	//OPERATORI - sizeof()
	//Ky operator e tregon madhesine ne bite te variablave, tipeve te te dhenave, classave, objekteve etj.
	
	 double numriDecimal = 2.5;
	 std::string emri = "Enis";
	 char shkronja = 'A';
	 bool student = true;
	 char shkronjat[] = {'A', 'B', 'C', 'D'};
 	 
	 std::cout << sizeof(numriDecimal) << " bite\n"; //8 bite
	 std::cout << sizeof(double) << " bite\n"; //8 bite
	 std::cout << sizeof(emri) << " bite\n"; // 32 bite
	 std::cout << sizeof(shkronja) << " bite\n"; // 1 bit
	 std::cout << sizeof(student) << " bite\n"; // 1 bit
	 
	 std::cout << sizeof(shkronjat) << " bite\n"; //4 bite sepse nje char e merr nje bit dhe ne array i kemi 4
	 
	 //Duke e perdorur kete operator mund te gjejme madhesine e array:
	 
	 std::cout << sizeof(shkronjat) / sizeof(char) << " elemente\n"; // 4 elemente ne kete rast
	 
	 
	 
	 //Iterimi ne array:
	 
	std::string lista[] = {"Hena", "Qielli", "Yyjet"};
	
	for(int i = 0; i < sizeof(lista)/sizeof(std::string); i++){
		std::cout << lista[i] << std::endl;
	}
	//Me ane te kesaj for loop ne iternojme ne array dhe e paraqesim cdo element:
	
	
	
	//Iterimi i array me ane te foreach loop:
	
	//foreach loop ben iterimin e lehte ne nje data set.
	std::string fjalet[] = {"C++", "Hello", "World"};
	
	for(std::string fjala : fjalet){
		std::cout << fjala << std::endl;
	}
	
	
	
	//Perdorimi i Array si parameter i funksionit:
	
	double numrat[] = {29.3, 15.7, 45.9, 17.9};
	int size = sizeof(numrat) / sizeof(double);
	double total = getTotal(numrat, size); //Ne duhet ta definojme kete funksion i cili i mbledh numrat mbrenda array:
//	std::cout << total; 150.8


	
	
	//Kerkimi i nje elementi ne array:
	int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int gjatesia = sizeof(nums)/sizeof(nums[0]);
	int index; //indeksi i iterimit per secilin numer
	int numri_qe_kerkohet;
	
	std::cout << "Vendoseni nje numer qe e kerkoni: " << std::endl;
	std::cin >> numri_qe_kerkohet;
	
	index = searchArray(nums, gjatesia, numri_qe_kerkohet);
	
	if(index != -1){
		std::cout << numri_qe_kerkohet << " eshte ne index " << index; 
	}
	else {
		std::cout << numri_qe_kerkohet << " nuk eshte ne liste";
	}
	
	
	
	
	//Sortimi i nje array
	int array[] = {6, 10, 2, 1, 3, 4, 7, 9, 8, 5};
	int madhesia = sizeof(array) / sizeof(int);
	
	sort(array, madhesia);
	
	for(int element: array){
		std::cout << element << " ";
	}
	
	
	
	
	//Funksioni fill():
	//I mbush nje rang te elementeve me vlere te caktuatu, fill(fillimi, mbarimi, vlera):
	
	//Nje perdorim praktik i ketij funksioni eshte ne rastin e mbushjes se array me shume vlera:
	
	const int SIZE = 50;
	std::string simbolet[SIZE];
	
	fill(simbolet, simbolet + SIZE, "C++");
	
	for(std::string simboli : simbolet){
		std::cout  << simboli << std::endl;
	}
	
	//Ne ne kete rast mund te mbushim vetem gjysmen e madhesise me nje vlere e nje me nje tjeter si keshtu:
//	fill(simbolet, simbolet + (SIZE/2), "C++");
//	fill(simbolet + (SIZE/2), simbolet + SIZE, "Hello");
	
	
	
	
	//Mbushja e array me input te perdoruesit:
	
	std::string shtete[4];
	int gjatesia_e_array = sizeof(shtete)/sizeof(shtete[0]);
	std::string temp;
	
	for(int i = 0; i < gjatesia_e_array; i++ ){
		std::cout << "Vendoseni nje shtet ose 'q' per te dale: #" << i + 1 << ": ";
		std::getline(std::cin, temp);
		
		if(temp == "q"){
			break;
		}
		else {
			shtete[i] = temp;
		}
	}
	
	std::cout << "Ti ke vendosur keto shtete: \n";
	
	for(int i = 0; !shtete[i].empty(); i++){
		std::cout << shtete[i] << std::endl;
	}
	
	
	
	
	
	
	//Array multidimensionale:
	
	//Vektoret(Array) dydimnesionale ose multidimensionale perbehen prej dy a me shume vektore dhe perdoren per paraqitjen e grafikeve, tabelave etj. dhe perbehen prej rreshtave dhe kolonave:
	//Ja si i krijojme keto vektore: (vektoret dydimensionale i perdorin dy pale kllapa ne definim, qe nenkuptojne rreshtat dhe kolonat, respektivisht. Nese ne nuk e dime fillimisht numrin e rreshtave , mund ta vendosim vetem ate te kolonave):
	
	std::string materialet[][3] = {
								  	{"Bakri", "Argjendi", "Ari"},
								  	{"Silici", "Germaniumi", "Galena"},
								  	{"Qelqi", "Plastika", "Druri"}
								  };
	
	//Per ti printuar elementet e kesaj array:
	//std::cout << materialet[0][0] // Bakri
	//std::cout << materialet[2][1] // Plastika
	
	//Per te treguar se si ne mund te iterojme ne nje array te tille do perdorim nje nested loop qe te llogaerisim numrin e rreshtave dhe kolonave:
	
	int rreshtat = sizeof(materialet)/sizeof(materialet[0]);
	int kolonat = sizeof(materialet[0])/sizeof(materialet[0][0]);
	
	for(int i = 0; i < rreshtat; i++){
		for(int j = 0; j < kolonat; j++){
			std::cout << materialet[i][j] << " ";
		}
		std::cout << '\n';
	}
		
	return 0;
}






double getTotal(double numrat[], int size){
	//Kur ne e vendosim nje array si parameter te funksionit atehere ajo konsiderohet si pointer dhe jo si array, prandaj programi e ka ta pamundur qe ne te dime gjatesine e array:
	//Kjo eshte arsyea pse te funksioni main ne kemi deklaurar variablen size te array
	double total = 0;
	
	for(int i = 0; i < size; i++){
		total += numrat[i];
	}
	
	return total;
}


//Funksioni i kerkimit te array:

int searchArray(int nums[], int gjatesia, int element){
	
	for(int i = 0; i < gjatesia; i++){
		
		if(nums[i] == element){
			return i;
		}
	}
	
	return -1;
}

//Funksioni i sortimit:

void sort(int array[], int madhesia){
	
	int temp; //variabel e rastit qe na ndihmon qe ti mbajme numrat perkohesisht.
	
	for(int i = 0; i < madhesia - 1; i++){
		for(int j = 0; j < madhesia - i - 1; j++){
			if(array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}
