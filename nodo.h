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

#endif //_NODO_

