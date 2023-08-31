#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string getComputerChoice(int randomNum, string computerChoice) {
		
		if(randomNum == 1){
			computerChoice = "Rock";
		}else if(randomNum == 2){
			computerChoice = "Scissors";
		}else {
			computerChoice = "Paper";
		}
		cout << computerChoice + " Here" << endl;
		
		return computerChoice;
}

string getMyChoice(string myChoice){
	
	cout << "Whats you choice?" << endl;
	cin >> myChoice;
	
	cout << myChoice << endl;
	return myChoice;
}

string getResult(string result, string computerChoice, string myChoice){
	
	if(myChoice == "Rock" && computerChoice == "Scissors"){
		
		result = "You won";
	}else if(myChoice == "Rock" && computerChoice == "Paper"){
		
		result = "You lose";
	}else if(myChoice == "Scissors" && computerChoice == "Paper"){
		
		result = "You won";
	}else if(myChoice == "Scissors" && computerChoice == "Rock"){
		
		result = "You lose";
	}else if(myChoice == "Paper" && computerChoice == "Rock"){
		
		result = "You win";
	}else if(myChoice == "Paper" && computerChoice == "Scissors"){
		
		result = "You lose";
	}else {
		result = "Its a tie";
	}
	
	cout << result;
	return result;
		
}
	
int main(){
	
	srand(time(NULL));
	
	const int randomNum = (rand() % 3) + 1;
	string computerChoice;
	string myChoice;
	string result;
	
	getMyChoice(myChoice);
	getComputerChoice(randomNum, computerChoice);
	getResult(result, computerChoice, myChoice);
	
	cout << result;
	
	return 0;
}
