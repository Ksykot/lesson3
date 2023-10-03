#include<iostream>

class Calculator {
public:
	double num1;
	double num2;
public:
	double add(int num1, int num2) {
		return num1 + num2;
	};

	double multiply(int num1, int num2) {
		return num1 * num2;
	};

	double subtract1_2(int num1, int num2) {
		return num1 - num2;
	};

	double subtract2_1(int num1, int num2) {
		return num2 - num1;
	};

	double divide1_2(int num1, int num2) {
		return num1 / num2;
	};

	double divide2_1(int num1, int num2) {
		return num2 / num1;
	};

	bool set_num1(double num1) {
		if (num1 == 0) {
			return false;
		}
		else {
			if (num1 != 0) {
				return true;
			}
		}
	}

	bool set_num2(double num1) {
		if (num2 == 0) {
			return false;
		}
		else {
			if (num2 != 0) {
				return true;
			}
		}
	}

	void print(double calculator) {
		std::cout << calculator << std::endl;
	}
	
};

int main() {

	setlocale(LC_ALL, "Russian");

	double num1, num2;
	Calculator calculator;

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
	
	calculator.add(num1, num2);
	std::cout << "num1 + num2 = ";
	print(calculator.add(num1, num2));

	calculator.multiply(num1, num2);
	std::cout << "num1 * num2 = ";
	print(calculator.multiply(num1,num2));

	calculator.subtract1_2(num1, num2);
	std::cout << "num1 - num2 = ";
	print(calculator.subtract1_2(num1, num2));

	calculator.subtract2_1(num1,num2);
	std::cout << "num2 - num1 = ";
	print(calculator.add(num1,num2));

	calculator.divide2_1(num1, num2);
	std::cout << "num2 \ num1 = ";
	print(calculator.divide2_1(num1, num2));

	calculator.subtract1_2(num1, num2);
	std::cout << "num1 \ num2 = ";
	print(calculator.divide1_2(num1, num2));
}