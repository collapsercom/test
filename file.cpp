// simple calculator program
#include <iostream>

/**
 * @brief Entry point of the program.
 * 
 * This function prompts the user to enter an arithmetic operator and two operands.
 * It then performs the corresponding arithmetic operation (+, -, *, /) on the operands
 * and displays the result. If the division operator is chosen and the second operand
 * is zero, an error message is displayed. If an invalid operator is entered, an error
 * message is displayed.
 * 
 * @return int Returns 0 upon successful execution.
 */
int main() {
	char operation;
	float num1, num2;

	std::cout << "Enter operator (+, -, *, /): ";
	std::cin >> operation;
	std::cout << "Enter two operands: ";
	std::cin >> num1 >> num2;

	switch(operation) {
		case '+':
			std::cout << num1 << " + " << num2 << " = " << num1 + num2;
			break;
		case '-':
			std::cout << num1 << " - " << num2 << " = " << num1 - num2;
			break;
		case '*':
			std::cout << num1 << " * " << num2 << " = " << num1 * num2;
			break;
		case '/':
			if(num2 != 0)
				std::cout << num1 << " / " << num2 << " = " << num1 / num2;
			else
				std::cout << "Error! Division by zero.";
			break;
		default:
			std::cout << "Error! Operator is not correct";
			break;
	}

	return 0;
}