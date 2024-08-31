#include <iostream>
using namespace std;

//prototype functions used in this program
int getValidInput();

//main function
int main()
{
	//define and initialize all variables used
	int firstNumber = 0;
	int secondNumber = 0;
	int thirdNumber = 0;
	string triangleType = "Unknown";

	//continuously run
	while (true) {
		//get input from the user
		firstNumber = getValidInput();

		secondNumber = getValidInput();

		thirdNumber = getValidInput();

		//determine what type of triangle the data represents
		if (firstNumber == secondNumber == thirdNumber) {
			triangleType = "equilateral";
		}
		else if ((firstNumber == secondNumber) || (firstNumber == thirdNumber) || (secondNumber == thirdNumber)) {
			triangleType = "isosceles";
		}
		else {
			triangleType = "scalene";
		}

		//print the result
		cout << "The triangle represented by your numbers is " << triangleType << "." << endl;
	}

	return 0;
}

int getValidInput() {

	//define and initialize variables used in this function
	int number = 0;

	cout << "Please enter an integer: ";

	//run until we get a valid input. If the user enters multiple incorrect characters, this will loop once for each character
	while (true) {
		if (cin >> number) {
			//input is an integer
			break;
		}else {
			//input was not an integer
			cin.clear();//clear the error flag
			cin.ignore();//discard invalid input
			cout << "Invalid input. Please enter an integer: ";
		}
	}

	return number;
}