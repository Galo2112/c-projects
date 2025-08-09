// 1.4.3.2
#include <iostream>

int main()
{
	int suma = 0, datos = 0;
	std::cout << "ingresa los numeros que desees para sumarlos: ";
	while (std::cin >> datos)
		suma += datos;
	std::cout << "LA SUMA DE LOS NUMEROS ES " <<suma;
	return 0;
}
