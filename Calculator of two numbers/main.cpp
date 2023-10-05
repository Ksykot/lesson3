#include<iostream>

class Calculator {
public:
	double num1;
	double num2;
	double value;
public:
	double add(double num1, double num2, double value) {
		value = num1 + num2;
		return value;
	};

	double multiply(double num1, double num2, double value) {
		value = num1 * num2;
		return value;
	};

	double subtract1_2(double num1, double num2, double value) {	
		value = num1 - num2;
		return value;
	};

	double subtract2_1(double num1, double num2, double value) {
		value = num2 - num1;
		return value;
	};

	double divide1_2(double num1, double num2, double value) {
		value = num1 / num2;
		return value;
	};

	double divide2_1(double num1, double num2, double value) {
		value = num2 / num1;
		return value;
	};

	bool set_num1(double num1) {
		if (num1 == 0) {
			return false;
		}
		else {
				this -> num1 = num1;
				return true;
		}
	}

	bool set_num2(double num1) {
		if (num2 == 0) {
			return false;
		}
		else {
				this->num2 = num2;
				return true;
		}
	}

	void print(double value) {
		std::cout << value << std::endl;
	}
	
};

int main() {

	setlocale(LC_ALL, "Russian");

	double num1, num2, value;
	Calculator calculator;

	do {
		do {
			std::cout << "Введите num1:";
			std::cin >> num1;
			if (calculator.set_num1(num1) == false) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		} while (calculator.set_num1(num1) == false);

		do {
			std::cout << "Введите num1:";
			std::cin >> num2;
			if (calculator.set_num2(num2) == false) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		} while (calculator.set_num2(num2) == false);


		calculator.add (num1, num2, value);
		std::cout << "num1 + num2 = ";
		calculator.print(value);

		calculator.multiply(num1, num2, value);
		std::cout << "num1 * num2 = ";
		calculator.print(value);

		calculator.subtract1_2(num1, num2, value);
		std::cout << "num1 - num2 = ";
		calculator.print(value);

		calculator.subtract2_1(num1, num2, value);
		std::cout << "num2 - num1 = ";
		calculator.print(value);

		calculator.divide2_1(num1, num2, value);
		std::cout << "num2 \ num1 = ";
		calculator.print(value);

		calculator.subtract1_2(num1, num2, value);
		std::cout << "num1 \ num2 = ";
		calculator.print(value);


	} while (true);
}