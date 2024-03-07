#include <cstdlib>
#include <iostream>
#include "lista.cpp"
using namespace std;

int main(int argc, char *argv[])
{
    Lista<float> listina;
    bool esito = false;

    Cella<float> *x_pos, *y_pos;// z_pos, w_pos;


    esito = listina.listaVuota();
    cout << "Esito Lista vuota: " << esito<<endl<<endl;

    x_pos = listina.primoLista(&listina);
    listina.insLista(&listina, 3.5, x_pos);
    y_pos = listina.succLista(x_pos);
    listina.insLista(&listina, 8.5, y_pos);
    y_pos = listina.succLista(y_pos);
    listina.insLista(&listina, 98.7, y_pos);
    listina.stampaLista(&listina);
    listina.cancLista(listina.precLista(y_pos));
     listina.stampaLista(&listina);

    y_pos = listina.succLista(y_pos);
        listina.insLista(&listina, 198.7, y_pos);
        y_pos = listina.succLista(y_pos);
            listina.insLista(&listina, 9228.77, y_pos);
            listina.stampaLista(&listina);
    system("PAUSE");
    return EXIT_SUCCESS;
}
