// P007 Decisiones (IF-ELSE-SWITCH CASE)).cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;

int main()
{

    int num_batallas;
    int batallas_f;
    int batallas_sf;
    int batallas_grupos;
    int Num_Jugadores = 0;
    int opc = 0;
    int rondas_ed = 0;
    while (true) {
        std::cout << "Hola soy goku! y me encanta pelear dime cuantos peleadores estaremos hoy?? \n";
        std::cin >> Num_Jugadores;
        std::cout << "WoooooW sera una batalla epica si peleamos " << Num_Jugadores << " peleadores espero todos tengan un gran nivel\n";
        std::cout << "Ahora dime como pelearemos?\n1.- Royal Rumble \n2.-Eliminatoria directa \n3.-Grupos, semifinal y final \n4.-salir\n";
        std::cin >> opc;
        switch (opc)
        {
        case 1://RR
            num_batallas = Num_Jugadores - 1;
            break;

        case 2://ED
            while (Num_Jugadores > 1) {

                Num_Jugadores = Num_Jugadores / 2;
                rondas_ed++;
                num_batallas = pow(2, rondas_ed) - 1;

            }
            break;
        case 3://GSF
            int grupos;
            if (Num_Jugadores % 2 == 0)
            {
                grupos = Num_Jugadores / 2;
            }
            else
            {
                grupos = (Num_Jugadores / 2) + 1;
            }
            {
                batallas_grupos = (grupos * (grupos - 1)) / 2;
                batallas_sf = grupos;
                batallas_f = 1;
                num_batallas = batallas_grupos + batallas_sf + batallas_f;
            }
            break;
        case 4:
            return EXIT_SUCCESS;
            break;
        default:
            std::cout << "Lo lamento no hay opci�n correcta" << std::endl;
            break;
            return 0;

        }

        std::cout << " se necesitaran " << num_batallas << "batallas para obtener a un ganador." << std::endl;
        system("pause"); //esto pausa la consola de comando hasta que el usuario presione una tecla 
        system("cls"); // esto limpia la consola de comando 

    }
    return 0;

}