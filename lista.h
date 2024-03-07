#ifndef _LISTA_
#define _LISTA_
#include "nodo.h"

using namespace std;

template <class tipoelem>
class Lista  {

public:
	Lista();
	~Lista();

	bool listaVuota();
	tipoelem leggiLista(Cella<tipoelem> * );
	Cella<tipoelem>* primoLista(Lista<tipoelem> *);
	bool fineLista(Cella<tipoelem> *);
	Cella<tipoelem>* succLista(Cella<tipoelem> *);
	Cella<tipoelem>* precLista(Cella<tipoelem> *);
	void insLista(Lista<tipoelem> *, tipoelem, Cella<tipoelem> *);
	void cancLista(Cella<tipoelem> *);
	void scriviLista(tipoelem, Cella<tipoelem> *);
	void stampaLista(Lista<tipoelem> *);

private:
     void creaLista();   
     nodo<tipoelem> core;// cuore della lista
	 int n_elementi;

};

#endif  //_LISTA_

