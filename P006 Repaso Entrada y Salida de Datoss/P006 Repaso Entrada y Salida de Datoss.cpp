// P006 Repaso Entrada y Salida de Datoss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";

    //estroctura de control
    //if 
    //syntaxis

    int edad = 0;
    std::cout << "que edad tienes?" << std::endl;
    if (edad > 18)
    {

        std::cout << "bienvenido al club de los adultos" << std::endl;

    }
    if (edad < 18)
    {

        std::cout << "al club de los peques" << std::endl;

    }
    //IF-ELSE
    //Syntaxis
    float temperatura = 0;
    std::cout << "cuantos grados centigrados tienes de temperatura? \n";
    std::cin >> temperatura;
    if (temperatura >= 35 && temperatura <= 38);
    {

        std::cout << "usted esta en buena condicion \n";

    }
    else()
    {

        std::cout << "si sigue consiente vaya al medico \n";

    }
    //Switch Case
    //Syntaxis
    int opc = 0;
    std::cout << "hola usario presiona una tecla del 1 al 4 para leer la frase de tu personaje favorito\n";
    std::cin >> opc;
    switch (opc)
    {
    case 1:
        std::cout << "Super!!!!!\n";
        break;
    case 2:
        std::cout << "detras de ti imbecil\n";
        break;

    case 3:
        std::cout << "yuJu\n";
        break;

    case 4:
        std::cout << "mi taladro es el taladro que perfora los cielos\n";
        break;
    default:
        std::cout << "nel mi chavo esa no la conozco\n";
        break;

    }

}