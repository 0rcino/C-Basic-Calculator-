#include <iostream>
#include <string>
using namespace std;


class Calculator { // access specifier 
	private: 
	char operation; // attributes 
	float num1, num2, answer; // attributes 
	
	public: // access specifier 
		void selection () { // fucntion of selection 
			cout << "\n Enter the First Number: "; 
		    cin >> num1;
		    
		    bool operation_ready = false; // initialize bool value 
		    while (operation_ready == false){	
		    cout << "Enter the Operation: "; // just in case not valid +,-,*,/ 
		    cin >> operation; 
		    
		    // conditions goes here to validate if not operation input 
		    if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
		  	operation_ready = false ; 
		  	cout << "Message: Please input valid operation from the options" << endl;
		  	cout << "Thank You! ";
		    }    
			else {
				operation_ready = true;
			}          		
		}
		
		    cout << "Enter the Second Number: ";
		    cin >> num2;
		}
		
		float getAnswer () { // function of the Answer 
			switch (operation) { // switch of operation answer 
				case '+':  
				answer = num1 + num2; 
				break;
				
				case '-':  
				answer = num1 - num2; 
				break;
				
				case '*':  
				answer = num1 * num2; 
				break;
				
				case '/':  
				answer = num1 / num2; 
				break;
			}
			return answer; 
		}
};


void MyCalcu() { // fucntion of main of selection 
  cout << "Calculator";
  cout << "Option" << endl;
  cout << "[+] - Addition" << endl;
  cout << "[-] - Subraction" << endl;
  cout << "[*] - Multiplication" << endl;
  cout << "[/] - Division" << endl;
}

int main() {

  char choice; 
  
  bool ready_exit = false; 
  while (ready_exit == false ) {
  	
  	Calculator C; // object of the class 
  
    MyCalcu(); // call methd 
    C.selection(); // call method 
     cout << "Answer : " << C.getAnswer() << endl;
  	
  	
  	bool continue_ready = false; 
  	while (continue_ready == false ) {
  	cout << " Do you want to continue (Y/y N/n): ";
  	cin >> choice;
  	
  	if (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
  		ready_exit = false; 
  		cout << "Message: Please Enter Y/y or N/n" << endl;
  		cout << "Thank you!";
	   }
	   else {
    	continue_ready = true; 
    	if (choice == 'Y'|| choice == 'y') {
    		ready_exit = false; 
    		system("cls"); // to clear screen console 	
		}
		else{ 
		   ready_exit = true;
		}
	}
	
    }  	
  }
  system("pause");
}