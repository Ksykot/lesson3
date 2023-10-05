#include<iostream>

class Counter {
	int number;
	int number_b;
public:
	Counter(int number) {
		this->number = number;
	}

	Counter() {
		int number;
	}

	void plus() {
		number + 1;
	}

	void minus() {
		number - 1;
	}

private:

	Counter(int number_b) {
		number_b = 1;
	}



};


int main() {

	setlocale(LC_ALL, "Russian");

	char p = '+', m = '-', c = '=', e = 'x';
	char answer, action;
	int number;

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> answer;
	Counter counter;
	if (answer == 'да') {
		std::cout << "Введите начальное значение счётчика: ";
		std::cout << number << std::endl;
	}

	do {
		std::cout << "Введите команду('+' , '-' , '=' или 'x'):";
		std::cin >> action;

		if (action == '+') {
			counter.plus();
		}

		if (action == '-') {
			counter.minus();
		}

		if (action == 'x') {
			std::cout << "До свидания!";
		}
	} while (action != 'x');
}