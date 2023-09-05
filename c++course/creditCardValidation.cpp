//Per ta krijuar kete projekt i cili validon numrin e kredit kartelave do e perdorim algoritmin e quajtur ALGORITMI I LUHN.

//1. I dyfishojme numrat e dyte prej te djathtes nga e majta. Nese numri i dyfishuar eshte me dy shifra, e ndajme ne nje shifer.
//2. I mbledhim te gjitha keto shifra.
//3. I mbledhim te gjitha shifrat teke prej hapit te pare.
//4. I mbledhim rezultatin e 2 & 3;
//5. Nese numri i fituar plotpjestohet me 10 atehere numri i karteles eshte ne rregull.

#include <iostream>

//Funksionet qe na nevojiten jane:

int getDigit(const int number);
int mbledhja_e_shifrave_teke(const std::string cardNumber);
int mbledhja_e_shifrave_qifte(const std::string cardNumber);

int main() {
	
	std::string cardNumber;
	int result = 0;
	
	std::cout << "Vendoseni numrin e karteles: # ";
	std::cin >> cardNumber;
	
	result = mbledhja_e_shifrave_qifte(cardNumber) + mbledhja_e_shifrave_teke(cardNumber);
	
	if(result % 10 == 0){
		std::cout << "Numri i kartes eshte valid!";
	}else {
		std::cout << "Numri i kartes nuk eshte valid!";
	}
	
	return 0;
}


int getDigit(const int number){
	
	//meqe ne duke i shumezuar numrat me dy ne funksionin e fundit mund te marrim shifra dyshifrore atehere ne mund ti ndajme ato ne nga nje shifer keshtu:
	
	return number % 10 + (number / 10 % 10);
}
int mbledhja_e_shifrave_teke(const std::string cardNumber){
	
	int shuma = 0;
	
	//Ne tani duhet te iterojme ne kete numer te kates te dhene ne renditje te kundert:
	
	for(int i = cardNumber.size() - 1; i >= 0; i =-2 ){
		shuma += cardNumber[i] - '0';
		//Ne duhet ta heqim karakterin 0 prej numrtin te kartes te gjeneruar ose vleren 48 sepse representimi i vleres se char 0 ne vlere decimale eshte 48.
		
	}
	
	return shuma;
}
int mbledhja_e_shifrave_qifte(const std::string cardNumber){
	
	int shuma = 0;
	
	//Ne tani duhet te iterojme ne kete numer te kates te dhene ne renditje te kundert:
	
	for(int i = cardNumber.size() - 2; i >= 0; i =-2 ){
		shuma += getDigit((cardNumber[i] - '0')* 2);
		//Ne duhet ta heqim karakterin 0 prej numrtin te kartes te gjeneruar ose vleren 48 sepse representimi i vleres se char 0 ne vlere decimale eshte 48.
		
	}
	
	return shuma;
}