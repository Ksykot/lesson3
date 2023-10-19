#include<iostream>

class Calculator {
public:
	double num1 = 0;
	double num2 = 0;
public:
	double add(double value) {
		value = num1 + num2;
		return value;
	};

	double multiply(double value) {
		value = num1 * num2;
		return value;
	};

	double subtract1_2(double value) {
		value = num1 - num2;
		return value;
	};

	double subtract2_1(double value) {
		value = num2 - num1;
		return value;
	};

	double divide1_2(double value) {
		value = num1 / num2;
		return value;
	};

	double divide2_1(double value) {
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

	bool set_num2(double num2) {
		if (num2 == 0) {
			return false;
		}
		else {
				this-> num2 = num2;
				return true;
		}
	}
};

void print(double value) {
	std::cout << value << std::endl;
}



int main() {

	setlocale(LC_ALL, "Russian");

	double num1 = 0, num2 = 0;
	double value = 0;
	Calculator calculator;

	do {
		do {
			std::cout << "Введите num1:";
			std::cin >> num1;
			if (calculator.set_num1(value) == false) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		} while (num1 == false);

		do {
			std::cout << "Введите num2:";
			std::cin >> num2;
			if (calculator.set_num2(value) == false) {
				std::cout << "Неверный ввод!" << std::endl;
			}
		} while (num2 == false);


		calculator.num1 = num1;
		calculator.num2 = num2;

		calculator.add (value);
		std::cout << "num1 + num2 = ";
		value = calculator.add(value);
		print(value);

		calculator.multiply(value);
		std::cout << "num1 * num2 = ";
		value = calculator.multiply(value);
		print(value);

		calculator.subtract1_2(value);
		std::cout << "num1 - num2 = ";
		value = calculator.subtract1_2(value);
		print(value);

		calculator.subtract2_1(value);
		std::cout << "num2 - num1 = ";
		value = calculator.subtract2_1(value);
		print(value);

		calculator.divide2_1(value);
		std::cout << "num2 / num1 = ";
		value = calculator.divide2_1(value);
		print(value);

		calculator.divide1_2(value);
		std::cout << "num1 / num2 = ";
		value = calculator.divide1_2(value);
		print(value);

	} while (true);
}