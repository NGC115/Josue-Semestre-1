// P002 Valor Absolutoo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include <locale.h>
#include <string>

int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	bool pregunta = true;
	int valor = 0;
	std::cout << "hola porfavor ingresa un valor";
	std::cin >> valor;

	if (valor <= 0);
	valor = valor * (-1);
	std::cout << "este es tu valor" << valor << std::endl;


}