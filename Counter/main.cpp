#include<iostream>

class Counter {
public:
	int number = 0;
	char a;
	Counter() {
		int number = 1;
	}

	int get_number() {
		return number;
	}

	void plus() {
	   number + 1;
	}

	void minus() {
		number - 1;
	}

private:

	 int Counter_ (int number) {
		number = 1;
	}



};


int main() {

	setlocale(LC_ALL, "Russian");

	Counter counter;

	char p = '+', m = '-', c = '=', e = 'x';
	char answer, action;
	int number = 0;
	int g_n = counter.get_number();

	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> answer;
	counter.a = answer;
	if (answer == 'да') {
		std::cout << "Введите начальное значение счётчика: ";
		std::cout << number << std::endl;
	}

	counter.get_number();

	do {
		std::cout << "Введите команду('+' , '-' , '=' или 'x'):";
		std::cin >> action;

		if (action == '+') {
			counter.plus();
		}

		if (action == '-') {
			counter.minus();
		}


		if (action == '=') {
			std::cout << g_n << std::endl;
		}

		if (action == 'x') {
			std::cout << "До свидания!";
		}
	} while (action != 'x');
}