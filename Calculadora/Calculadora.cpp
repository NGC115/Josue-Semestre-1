// Calculadora.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int opcion = 0;
    float VALOR1 = 0;
    float VALOR2 = 0;
    float Resultado;
    float VALOR = 0;
    std::cout << "Seleccione del 1 al 6 que operacion quiere realizar 1-Suma 2-Resta 3-Multiplicacion 4-Div 5-VALOR ABSLUTO 6-Mayor y Menor que \n";
    std::cin >> opcion;
    
    switch (opcion)

    {
    case 1:
        Resultado = VALOR1 + VALOR2;
        std::cout << "El resultado es\n" << Resultado;
        break;
    case 2:
        Resultado = VALOR1 - VALOR2;
        std::cout << "El resultado es\n" << Resultado;
        break;
    case 3:
        Resultado = VALOR1 * VALOR2;
        std::cout << "El resultado es\n" << Resultado;
        break;
    case 4:
        Resultado = VALOR1 / VALOR2;
        std::cout << "El resultado es\n" << Resultado;
        break;
    case 5:

        std::cout << "hola porfavor ingresa un valor\n";
        std::cin >> VALOR;
        if (VALOR <= 0);
        VALOR = VALOR * (-1);
        std::cout << "este es tu valor" << VALOR << std::endl;

        break;
    case 6:
        std::cout << "hola porfavor ingresa un valor\n";
        std::cin >> VALOR1;
        std::cout << "hola ingresa otro valor\n";
        std::cin >> VALOR2;

        if (VALOR1 == VALOR2)
        {
            std::cout << "son identicos\n";
        }
        else if (VALOR1 < VALOR2)
        {
            std::cout << VALOR1 << "es mayor que\n" << VALOR2 << std::endl;
        }
        else if (VALOR1 > VALOR2)
        {
            std::cout << VALOR1 << "es menor que\n" << VALOR2 << std::endl;
        }
        break;


    }





}