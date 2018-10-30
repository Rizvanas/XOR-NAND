#include <iostream>

int getXOR(int a, int b);
int getNAND(int a, int b);

int main(int argc, char **argv) {
	char *a{ nullptr }, *b{ nullptr };
	int num1{ 0 }, num2{ 0 };

	a = *(argv + 1);
	b = *(argv + 2);

	num1 = atoi(a);
	num2 = atoi(b);

	int result = num1 ^ num2;
	std::cout << a << " ^ " << b <<  " = " <<  result << std::endl;
	std::cout << a << " ^ " << b << " = " << getXOR(num1, num2) << std::endl;
	std::cout << a << " ^ " << b << " = " << getNAND(num1, num2) << std::endl;

	return 0;
}

int getXOR(int a, int b) {
	int result = (a | b) & ~(a & b);
	return result;
}

int getNAND(int a, int b) {
	int result = ~(~(~(a & b) & a) & ~(~(a & b) & b));
	return result;
}