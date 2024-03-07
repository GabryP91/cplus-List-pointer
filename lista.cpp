
#include <iostream>
#include <assert.h>
#include "lista.h"

template <class tipoelem>
Lista<tipoelem>::Lista()  {	creaLista(); };

template <class tipoelem>
Lista<tipoelem>::~Lista() {};

template <class tipoelem>
void Lista<tipoelem>::creaLista()

 {
	 n_elementi = 0;
 };

template <class tipoelem>
void Lista<tipoelem>::insLista(Lista<tipoelem> *L, tipoelem in, Cella<tipoelem>* pos)

{
   core.create_new(in, pos);
   n_elementi++;
};

template <class tipoelem>
void Lista<tipoelem>::scriviLista(tipoelem n, Cella<tipoelem>* p)  

{   assert(!listaVuota());
	
   core.set_value(p , n);
};

template <class tipoelem>
Cella<tipoelem>* Lista<tipoelem>::primoLista(Lista<tipoelem> *L) 

{
   Cella<tipoelem>* output; 
   output = core.get_succ(core.first);
    return output;
};

template <class tipoelem>
bool Lista<tipoelem>::listaVuota()

{
	return (n_elementi == 0);
};

template <class tipoelem>
bool Lista<tipoelem>::fineLista(Cella<tipoelem>* pos)

{
	 bool esito = false;
	 Cella<tipoelem>* px = core.last_full();

	  if (pos == px)
	    esito = true;

	  return esito;
};

template <class tipoelem>
tipoelem Lista<tipoelem>::leggiLista(Cella<tipoelem>* pos) 

{ 
 assert(!listaVuota());
            
  return core.get_value(pos);
};

template <class tipoelem>
 Cella<tipoelem>* Lista<tipoelem>::succLista(Cella<tipoelem>* pos)

{
  Cella<tipoelem>* output = core.get_succ(pos);

  return output;
};

template <class tipoelem>
Cella<tipoelem>* Lista<tipoelem>::precLista(Cella<tipoelem>* pos)

{
   Cella<tipoelem>* output = core.get_prec(pos);

   return output;
};

template <class tipoelem>
void Lista<tipoelem>::cancLista(Cella<tipoelem>* pos)  

{
   assert(!listaVuota());
  
   core.del_current(pos);
   n_elementi--;
};

template <class tipoelem>
void Lista<tipoelem>::stampaLista(Lista<tipoelem> *lis)  

{
   assert(!(lis->listaVuota()));
   core.print();
};