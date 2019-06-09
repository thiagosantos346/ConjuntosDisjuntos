//
// Created by ts on 09/06/19.
//

#ifndef CONJUNTOSDISJUNTOS_CONJUNTO_H
#define CONJUNTOSDISJUNTOS_CONJUNTO_H

#include <list>
#include "Elemento.h"

using namespace std;

class Conjunto {

    private:
        list<Elemento> elementos;
        bool vasio = true;
public:

    bool isVasio() const;

    void setVasio(bool vasio);

public:
    const list<Elemento> &getElementos() const;

private:
    char representante;
public:

    void addElemento(const Elemento &novoElemento);
    void setRepresentante(char representante);
    Conjunto *getThis();
    char getRepresentante() const;


};


#endif //CONJUNTOSDISJUNTOS_CONJUNTO_H
