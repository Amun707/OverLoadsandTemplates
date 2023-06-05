#include<iostream>


int A;//глобальная переменная, которая может быть использована в любой части кода
const int SIZE = 3;//глобальная константа
int ARR[SIZE];//глобальный массив
//глобальные переменные создаются сразу после подключенных библиотек


void add_A() {
	A += 10;
}

void func_with_static() {
	static int s = 0;//static - делает переменную статической
	s++;
	std::cout << "s = " << s << std::endl;
}

//ПАРАМЕТРЫ ПО УМОЛЧАНИЮ
//функция возвращающая число num1, возведенное в степень, равную числу num2
int power(int num1, int num2 = 2) {
	int result = 1;//num1^0
	for (int i = 1; i <= num2; i++)
		result *= num1;
	return result;
}

double max(double num1, double num2);//прототип функции, добавленный для того чтобы компилятор знал о ее существовании

void stars(int count = 10);//значения по умолчанию пишутся только в прототипах
//при работе с прототипами функций значения по умолчанию пишутся только в прототипах

long long factorial(int num);


int main() {
	system("chcp 1251>nul");
	int n, m;
//ОБЛАСТИ ВИДИМОСТИ ДАННЫХ
/*	A = 7;
	std::cout << "A = " << A << std::endl;
	add_A();
	std::cout << "A = " << A << std::endl;

	func_with_static();//s = 1
	func_with_static();//s = 2
	func_with_static();//s = 3*/

	//ПАРАМЕТРЫ ПО УМОЛЧАНИЮ
	/*std::cout << power(4, 3) << std::endl;
	std::cout << power(5) << std::endl;
	std::cout << power(7) << std::endl;*/


	//прототипы функций
	/*std::cout << "Введите два числа -> ";
	std::cin >> n >> m;
	std::cout << "Максимум: " << max(n, m) << std::endl;

	stars(5);
	stars();*/

	//Задача 4. Факториал числа
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << n << "! = " << factorial(n) << "\n\n";


	return 0;
}

//а это реализация(прототипа) функции, вынесенная в часть кода после main для удобства
double max(double num1, double num2) {
	return num1 > num2 ? num1 : num2;//если num1 больше чем num2 - то num1 иначе num2

}

//значения по умолчанию не пишутся в прототипах
void stars(int count) {
	for (int i = 0; i < count; i++)
		std::cout << '*';
	std::cout << std::endl;
}


long long factorial(int num) {
	long long result = 1;
	for (int i = 2; i <= num; i++)
		result *= i;
	return result;
}