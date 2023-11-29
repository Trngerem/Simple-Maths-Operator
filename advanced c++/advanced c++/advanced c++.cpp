#include <iostream>
using namespace std;

int add(int a, int b) {
	return a + b;
}

int divide(int a, int b) {
	if (a / b != 0) {
		return a / b;
	}
	else {
		cout << "Does not divide to a whole number" << endl;
		return 0;
	}
	return 0;
}

int multiply(int a, int b) {
	return a * b;
}

int subtract(int a, int b) {
	return a - b;
}

int (*operations[])(int, int) = { add, subtract, multiply, divide };

int main()
{
	int operation, operand1, operand2;
	cout << "Enter mathematical function (1 = add || 2 = subtract || 3 = multiply || 4 = divide || 5 = exit):" << endl;

	while (true) {
		cin >> operation;

		if (operation == 5) {
			cout << "Exiting the program" << endl;
			break;
		}
		else {
			cout << "Enter the Whole numbers you want to work with : " << endl;
			cin >> operand1;
			cin >> operand2;

			if (operation == 1) {
				cout << operations[0](operand1, operand2) << endl;
				cout << "";
			}
			else if (operation == 2) {
				cout << operations[1](operand1, operand2) << endl;
				cout << "";
			}
			else if (operation == 3) {
				cout << operations[2](operand1, operand2) << endl;
				cout << "";
			}
			else if (operation == 4) {
				cout << operations[3](operand1, operand2) << endl;
				cout << "";
			}
			else {
				cout << "Invalid number selected" << endl;
			}
			cout << "Restarting. Please select operation : ";

		}

	}

	return 0;
}