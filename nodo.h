#ifndef _NODO_
#define _NODO_

#include "cella.h"

template <class tipoelem>
class nodo {

public:	
	nodo();
	~nodo();

	void create_new(tipoelem, Cella<tipoelem>*);
	void set_value(Cella<tipoelem>* ,tipoelem );
	Cella<tipoelem>* get_prec(Cella<tipoelem>* );
	Cella<tipoelem>* get_succ(Cella<tipoelem>* );
	Cella<tipoelem>* last_full();
	tipoelem get_value(Cella<tipoelem>* );
	void del_current(Cella<tipoelem>* );
	void print();
	void create(); // chiamata dal costruttore

	Cella<tipoelem>* first; //variabile sentinella

};

#include <iostream>
using namespace std;

template <class tipoelem>
nodo<tipoelem>::nodo()

{
	create();
};

template <class tipoelem>
nodo<tipoelem>::~nodo(){};/*distruttore*/

template <class tipoelem>
void nodo<tipoelem>::create()

{

	first = (Cella<tipoelem>*) malloc(sizeof(Cella<tipoelem>));
	first->dato = 0;
	first->succ = first;
	first->prec = first;
};

template <class tipoelem>
void nodo<tipoelem>::create_new(tipoelem in, Cella<tipoelem>* last)

{
	Cella<tipoelem>* temp;

	temp = (Cella<tipoelem>*) malloc(sizeof(Cella<tipoelem>));

	temp->dato = in; //(tipoelem) casting necessario

	//COMBINAZIONE VINCENTE

	temp->prec = last;
	temp->succ = first;
	last->prec->succ = last;
	last->succ = temp;
	last = temp;
};

template <class tipoelem>
Cella<tipoelem>* nodo<tipoelem>::get_prec(Cella<tipoelem>* current)

{
	return current->prec;
};

template <class tipoelem>
Cella<tipoelem>* nodo<tipoelem>::get_succ(Cella<tipoelem>* current)

{
	return current->succ;
};

template <class tipoelem>
void nodo<tipoelem>::set_value(Cella<tipoelem>* current, tipoelem in)

{
	current->dato =  in; //(tipoelem)
};

template <class tipoelem>
tipoelem nodo<tipoelem>::get_value(Cella<tipoelem>* current)

{
	tipoelem out;

	out = current->dato;
	return out;
};

template <class tipoelem>
Cella<tipoelem>* nodo<tipoelem>::last_full()

{
	Cella<tipoelem>* pos;

	pos = first;

	do
	{
		pos = get_succ(pos);
	} while (pos->succ == first);

	return pos;
};

template <class tipoelem>
void nodo<tipoelem>::del_current(Cella<tipoelem>* current)

{
	Cella<tipoelem>* temp;

	temp = current;

	current->succ->prec = current->prec;
	current->prec->succ = current->succ;
	current = current->succ;

	free(temp);
};

template <class tipoelem>
void nodo<tipoelem>::print()

{
	Cella<tipoelem>* pos = first;
	Cella<tipoelem>* pos2 = get_succ(pos);

	while (pos2 != first) {

		cout << "Elemento: " << pos2->dato << "\n";
		pos2 = get_succ(pos2);
	}
};

#endif //_NODO_

