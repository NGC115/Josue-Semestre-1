// P004 Entrada y Salida de Datoss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include <string>


int main()
{


    setlocale(LC_ALL, "es_MX.UTF-8");
    bool pregunta = false;
    bool sientes = false;
    bool felis = true;
    int peso;
    int edad = 0;
    int n_temperatura = 36;
    int n_altura = 0;
    char paracetamol;
    float precio = 200;
    float estatura, imc;
    std::string nombre;
    std::cout << "Consultorio medico:\n";
    std::cout << "hola paciente como te llamas? :\n";
    getline(std::cin, nombre);
    std::cout << "hola paciente que edad tienes:\n" << edad << std::endl;
    std::cin >> edad;
    std::cout << "Introduce tu Peso (Kg):\n";
    std::cin >> peso;
    std::cout << "Introduce tu Estatura  (Mts):\n";
    std::cin >> estatura;
    imc = peso / (estatura * estatura);
    std::cout << "Tu IMC es de :   " << imc << std::endl;
    std::cout << "como te sientes:\n" << sientes << std::endl;
    std::cin >> sientes;
    std::cout << "vamos a ver tu temperatura:\n";
    std::cout << "tu temperatura es:\n" << n_temperatura << std::endl;
    std::cin >> n_temperatura;
    std::cout << "te recomiendo pracetamol:\n";
    std::cout << "lea y responda con verdadero o falso: \n" << "te gusto la secion? 0)no 1)si" << std::endl;
    std::cin >> pregunta;
    std::cout << "el precio de la secion" << precio << "gracias" << std::endl;

}
