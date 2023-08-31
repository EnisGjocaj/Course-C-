#include <iostream>
using namespace std;

int main(){
    
    double number1, number2;
    char typeOfOperation; 
    
    cout << "Type the operator that you want:" << endl;
    cin >> typeOfOperation;
    
    cout << "Number 1: " << endl;
    cin >> number1;
    
    cout << "Number2: " << endl;
	cin >> number2;
	
	if(typeOfOperation == '+'){
		
		double result = number1 + number2;
		cout << "The result is: "<< result << endl;
	}else if(typeOfOperation == '*'){
		
		double result = number1 * number2;
		cout << "The result is: "<< result << endl;
	}else if(typeOfOperation == '/'){
		
		double result = number1 / number2;
		cout << "The result is: "<< result << endl;
	} else if(typeOfOperation == '-'){
		
		double result = number1 - number2;
		cout << "The result is: "<< result << endl;
	} 
    
    return 0;
}
