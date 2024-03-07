#ifndef CELLA_H_
#define CELLA_H_

template <class tipoelem>
class Cella{
public:
    
    tipoelem dato;
	Cella<tipoelem> *prec;
	Cella<tipoelem> *succ;

};


#endif /* CELLA_H_ */
