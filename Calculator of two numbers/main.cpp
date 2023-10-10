#include<iostream>

class Calculator {
public:
	double num1;
	double num2;
public:
	double add() {
		double value;
		value = num1 + num2;
		return value;
	};

	double multiply() {
		double value;
		value = num1 * num2;
		return value;
	};

	double subtract1_2() {	
		double value;
		value = num1 - num2;
		return value;
	};

	double subtract2_1() {
		double value;
		value = num2 - num1;
		return value;
	};

	double divide1_2() {
		double value;
		value = num1 / num2;
		return value;
	};

	double divide2_1() {
		double value;
		value = num2 / num1;
		return value;
	};

	bool set_num1() {
		if (num1 == 0) {
			return false;
		}
		else {
				this -> num1 = num1;
				return true;
		}
	}

	bool set_num2() {
		if (num2 == 0) {
			return false;
		}
		else {
				this->num2 = num2;
				return true;
		}
	}
};

void print(double value) {
	std::cout << value << std::endl;
}



int main() {

	setlocale(LC_ALL, "Russian");

	double num1, num2;
	double value = 0;
	Calculator calculator;

	do {
		do {
			std::cout << "Введите num1:";
			std::cin >> num1;
			if (calculator.set_num1() == false) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		} while (calculator.set_num1() == false);

		do {
			std::cout << "Введите num2:";
			std::cin >> num2;
			if (calculator.set_num2() == false) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		} while (calculator.set_num2() == false);


		calculator.add ();
		std::cout << "num1 + num2 = ";
		print(value);

		calculator.multiply();
		std::cout << "num1 * num2 = ";
		print(value);

		calculator.subtract1_2();
		std::cout << "num1 - num2 = ";
		print(value);

		calculator.subtract2_1();
		std::cout << "num2 - num1 = ";
		print(value);

		calculator.divide2_1();
		std::cout << "num2 / num1 = ";
		print(value);

		calculator.subtract1_2();
		std::cout << "num1 / num2 = ";
		print(value);


	} while (true);
}