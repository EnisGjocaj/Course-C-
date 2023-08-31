#include <iostream>

using namespace std;

int main(){
	
	int secretNum = 7;
	int guessedNum;
	int guessCounter = 0;
	int guessingLimit = 3;
	bool outOfGuesses = false;
	
	while(secretNum != guessedNum && !outOfGuesses){
		
		if(guessCounter < guessingLimit){
			
			cout << "Enter your number" << endl;
		    cin >> guessedNum;
		    guessCounter++;
		    outOfGuesses = false;
		    
		} else{
			outOfGuesses = true;
		} 
	}
	
	if(!outOfGuesses){
		
		cout << "You win!" << endl;
	}else{
		cout << "You lose!" << endl;
	}
		
	return 0;
}